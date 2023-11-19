// Problem: https://leetcode.com/problems/roman-to-integer/description/

/**
 * Time Complexity: O(n)
 * Space Complexity: O(1)
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> rti = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};

        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && rti[s[i]] < rti[s[i + 1]]) {
                result -= rti[s[i]];
            } else {
                result += rti[s[i]];
            }
        }
        return result;
    }
};