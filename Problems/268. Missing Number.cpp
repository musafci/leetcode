// Problem: https://leetcode.com/problems/missing-number/

/*
    Solution #01
    Step 01: Find out size(n) of array.
    Step 02: Get total summation of array size by formula(n * (n+1) / 2)
    Step 03: Run a for loop to (<n) & minus array value from total array summation.
*/

#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total = n * (n+1) / 2;
    for (int i = 0; i < n; i++)
    {
        total -= nums[i];
    }
    return total;    
}

int main() {
    vector<int> nums = {0, 1, 3, 4, 5};
    int result = missingNumber(nums);
    cout << result;
    return 0;
}