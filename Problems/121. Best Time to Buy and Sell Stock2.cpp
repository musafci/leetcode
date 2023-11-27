// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// TC: O(N)
// MC: O(1)
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maximumProfit = 0;
        for(int i = 0; i + 1 < p.size(); i++) {
            if(p[i + 1] > p[i])
                maximumProfit += p[i + 1] - p[i];
        }
        return maximumProfit;
    }
};