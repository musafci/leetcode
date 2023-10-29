// Problem: https://leetcode.com/problems/valid-anagram/description/


// Solution no.1
// TC: O(N), where N = |s| + |t|
// SC: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> frequency_s(256, 0);
        for (auto c : s) {
            frequency_s[c]++;
        }
        vector<int> frequency_t(256, 0);
        for (auto c : t) {
            frequency_t[c]++;
        }
        return frequency_s == frequency_t;
    }
};

// Solution no.2
// TC:: O(NlogN)
// SC: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};