// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

/**
 * Time Complexity : O(n)
 * Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX;
        int profit = 0;
        for (auto price : prices)
        {
            lowest = min(lowest, price);
            // profit = max(profit, price - lowest);
        }
        return lowest;
            // return profit;
    }
// };


int main () {
    vector<int> nums = {7,1,5,3,6,4};
    int result = maxProfit(nums);
    cout << result << endl;
    return 0;
}