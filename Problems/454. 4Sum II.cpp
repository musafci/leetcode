// Problem: https://leetcode.com/problems/4sum-ii/description/

/**
 * Time Complexity: O(n^2)
 * Space Complexity: O(n^2)
*/

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> pair_sum;
        for (int i : nums1) {
            for (int j : nums2) {
                pair_sum[i + j]++;
            }
        }
        int count = 0;
        for (int i : nums3) {
            for (int j : nums4) {
                if (pair_sum.count(-(i + j))) {
                    count += pair_sum[-(i + j)];
                }
            }
        }
        return count;
    }
};