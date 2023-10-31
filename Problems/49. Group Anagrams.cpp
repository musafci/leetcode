// Problem: https://leetcode.com/problems/group-anagrams/description/

/**
 * Time Complexity: O(SlogL), where S is the sum of all characters in all strings and L is the length of the (longest string or average string).
 * Space Complexity: O(S), where S is the sum of all characters in all strings.
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups; // map to store group of anagrams
        for (auto str : strs) { // iterate vector of string
            string id_str = str; // copy of single string
            sort(id_str.begin(), id_str.end()); // sorting of copy string
            // cout << id_str << " : " <<str << endl;
            groups[id_str].push_back(str); // groups map e key (id_str) wise value (str) push kora hocche.            
        }

        for (auto it : groups) {
            cout << it.first << " : ";
            for (auto jt : it.second) {
                cout << jt << " ";
            }
        }

        // if we want to print our map at this situation
        // for (auto it : groups) {
        //     cout << it.first << " : ";
        //     for (auto jt : it.second) {
        //         cout << jt << " ";
        //     }
        //     cout << "\n";
        // }

        vector<vector<string>> results; // vector to store group of anagrams
        //for (auto it : groups) { // iterate groups map
        for (auto &it : groups) { // iterate groups map with reference
            results.push_back(it.second); // push group of anagrams to results vector
        }
        return results;
    }
};