// Problem: https://leetcode.com/problems/gas-station/description/

/**
 * Time Complexity: O(N)
 * Space Complexity: O(1)
*/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0, tank = 0;
        int sumGas = 0, sumCost = 0;
        for (int i = 0; i < (int)gas.size(); i++) {
            sumGas += gas[i];
            sumCost += cost[i];
            tank += gas[i] - cost[i];
            if (tank < 0) {
                tank = 0;
                start = i + 1;
            }
        }
        if (sumGas < sumCost) {
            return -1;
        }
        return start;
    }
};