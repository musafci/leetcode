// Problem: https://leetcode.com/problems/longest-common-prefix/description/

/**
 * Time Complexity: O(N * M), Where N is the number of strings and M is the length of the longest string
 * Space Complexity: O(M), Where M is the length of the longest string
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string base = strs[0]; // We set first string as a 'base'
        string prefix = "";

        for (int i = 0; i < base.length(); i++) {
            char single_char = base[i];
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].length() || strs[j][i] != single_char) {
                    return prefix;
                }
            }
            prefix += single_char;
        }
        return prefix;
    }
};