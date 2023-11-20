// Problem: https://leetcode.com/problems/roman-to-integer/description/

/**
 * Time Complexity:
 * Space Complexity:
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> rti = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
        unordered_map<int, char> roman;

        for (int i = 0; i < s.length(); i++) {
            roman[i] = s[i];
        }
        // for (auto jk : roman) {
        //     cout << jk.first << " " << jk.second << endl;
        // }
        int result = 0;
        for (int j = 0; j < s.length(); j++) {
            int current_value = s[j];
            if (current_value ) {

            }
            result = result + rti[it];
        }
        return result;
    }
};