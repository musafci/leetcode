// Problem: https://leetcode.com/problems/find-and-replace-in-string/description/

// TC: O(SN), where N = string length
// MC: O(N)

class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        vector<pair<int, int>> updates;
        for (int i = 0; i < indices.size(); i++) {
            updates.push_back({indices[i], i});
        }
        sort(updates.rbegin(), updates.rend());
        for (auto &update : updates) {
            int pos = update.first;
            string& source = sources[update.second];
            string& target = targets[update.second];
            if (s.substr(pos, source.size()) == source) {
                s = s.substr(0, pos) + target + s.substr(pos + source.size());
            }
        }
        return s;
    }
};