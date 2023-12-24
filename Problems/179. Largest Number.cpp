// Problem: https://leetcode.com/problems/largest-number/

// TC: O(NKlogN)
// MC: O(N)
// where, N = number of strings, K = avg length of a string
class Solution {
public:
    static bool cmp(const int &a, const int &b)
    {
        string sa = to_string(a);
        string sb = to_string(b);
        string sab = sa + sb;
        string sba = sb + sa;
        return sab > sba;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        string result = "";
        for (int i = 0; i < nums.size(); i++) {
            // ignore leading zeroes
            if (result == "" && nums[i] == 0 && (i + 1) < nums.size()) continue;
            result += to_string(nums[i]);
        }
        return result;
    }
};