// Problem:https://leetcode.com/problems/jump-game-ii/description/

/**
 * Time Complexity: O(N)
 * Space Complexity: O(1)
*/

class Solution {
public:
    int jump(vector<int>& nums) {
        int max_reach = 0, curr_pos = 0, steps = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            max_reach = max(max_reach, nums[i] + i);
            if (i == curr_pos) {
                steps++;
                curr_pos = max_reach;
            }
        }
        return steps;
    }
};