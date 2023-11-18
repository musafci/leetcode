// Problem: https://leetcode.com/problems/isomorphic-strings/description/

/**
 * Time complexity:
 * Space Complexity:
*/

class Solution {
public:
    bool isIsomorphicOneWay(string &s, string &t) {
        unordered_map<char, char> from;
        for (int i = 0; i < s.size(); i++) {
            if (from.count(s[i]) and from[s[i]] != t[i]) {
                return false;
            }
            from[s[i]] = t[i];
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return isIsomorphicOneWay(s, t) && isIsomorphicOneWay(t, s);
    }
};