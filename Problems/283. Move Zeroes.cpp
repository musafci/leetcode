// Problem: https://leetcode.com/problems/move-zeroes/description/

/**
 * Time Complexity : O(n)
 * Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int L = 0, R = 0; R < nums.size(); R++)
        {
            if (nums[R] != 0)
            {
                swap(nums[L], nums[R]);
                L++;
            }
        }
        return;
    }
};

// int main () {
//     vector<int> nums = {0,1,0,3,12};
//     int result = moveZeroes(nums);
//     cout << result << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[nonZeroIndex], nums[i]);
            nonZeroIndex++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    
    return 0;
}
