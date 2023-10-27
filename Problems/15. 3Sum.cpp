// Problem: https://leetcode.com/problems/3sum/description/

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Intro Sort: O(NlogN)
    vector<vector<int>> triplets;

    for (int i = 0; i < nums.size(); i++) {
        int a = nums[i];
        // [i + 1, n - 1] ei range e amake duita number b, c ber korte hobe, 
        // jeno b + c == -1 hoy. (actually sorted two sum)
        int L = i + 1;
        int R = nums.size() - 1;
        int target = -a; // exactly opposite of : int a = nums[i];

        while (L < R) {
            if (nums[L] + nums[R] > target) R--;
            else if (nums[L] + nums[R] < target) L++;
            else {
                int b = nums[L];
                int c = nums[R];
                while(L + 1 < R && nums[L + 1] == b) L++;
                while(L < R - 1 && nums[R - 1] == c) R--;
                triplets.push_back({a, b, c});
                L++;
                R--;            
            }
            while(i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
        }
    }
    // assert(triplets.size() <= 2000);
    return triplets;
}


// int main() {
//   vector<int> nums = {-1, 0, 1, 2, -1, -4};
//   vector<vector<int>> result = threeSum(nums);

//   if (result.empty()) {
//     std::cout << "No triplets found." << std::endl;
//     return 0;
//   }

//   for (int i = 0; i < result.size(); i++) {
//     std::cout << result[i] << " ";
//   }
//   std::cout << std::endl;

//   return 0;
// }



/**
 * Leetcode solution
 * Time Complexity: O(N^2)
 * Space Complexity: O(N)
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int L = i + 1;
            int R = nums.size() - 1;
            int target = -a; // exactly opposite of : int a = nums[i];

            while (L < R) {
                if (nums[L] + nums[R] > target) R--;
                else if (nums[L] + nums[R] < target) L++;
                else {
                    int b = nums[L];
                    int c = nums[R];
                    while(L + 1 < R && nums[L + 1] == b) L++;
                    while(L < R - 1 && nums[R - 1] == c) R--;
                    triplets.push_back({a, b, c});
                    L++;
                    R--;            
                }
                while(i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
            }
        }
        return triplets;
    }
};