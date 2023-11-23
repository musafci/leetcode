// Problem: https://leetcode.com/problems/lru-cache/description/

/**
 * Time complexity: O(1) for get() and put()
 * Space Complexity: O(C) where C is the capacity
*/

class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if (key_value.count(key) == 0) return -1; // key existence check
        updateLRU(key);
        return key_value[key]; // return value
    }
    
    void put(int key, int value) {
        if (key_value.count(key) == 0 && lru.size() == cap) {
            evict();
        }
        updateLRU(key);
        key_value[key] = value;
    }

private:
    int cap;
    list<int> lru;
    unordered_map<int, list<int>::iterator> key_location;
    unordered_map<int, int> key_value;
    
    void updateLRU(int key) {
        // first delete the key from the lru
        if (key_value.count(key)) {
            lru.erase(key_location[key]);
        }
        // then add the key to the front of the lru and update the key_location
        lru.push_front(key);
        key_location[key] = lru.begin();
    }

    void evict() {
        key_value.erase(lru.back()); // delete the key from the key_value
        key_location.erase(lru.back()); // delete the key from the key_location
        lru.pop_back(); // delete the key from the lru
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */