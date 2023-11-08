// Problem: https://leetcode.com/problems/insert-delete-getrandom-o1/

/**
 * Time Complexity
 *  - insert(): O(1)
 *  - remove(): O(1)
 *  - getRandom(): O(1)
 * 
 * Space Complexity : O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class RandomizedSet {
public:
    vector<int> rset;
    unordered_map<int, int> valIndexMap;
    
    bool insert(int val) {
        if (valIndexMap.count(val)) return false;
        valIndexMap[val] = rset.size();
        rset.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (valIndexMap.count(val) == 0) return false;

        int valIndex = valIndexMap[val];
        int last = rset.back();
        swap(rset[valIndex], rset[rset.size() - 1]);

        rset.pop_back();
        valIndexMap[last] = valIndex;
        valIndexMap.erase(val);
        return true;
    }
    
    int getRandom() {
        int rd_idx = rand() % rset.size();
        return rset[rd_idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */