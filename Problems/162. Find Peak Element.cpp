// Problem: https://leetcode.com/problems/find-peak-element/description/

/**
 * Time complexity: O(logN)
 * Space complexity: O(1)
*/
class Solution {
public:    
    int findPeakElement(vector<int>& nums) {
        int L = 0, R = nums.size() - 1;
        while(L < R) {
            int M = (L + R) / 2;
            if (nums[M] < nums[M + 1]) L = M + 1;
            else R = M;
        }
        return L;
    }
};