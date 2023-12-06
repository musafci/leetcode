// Problem: https://leetcode.com/problems/search-a-2d-matrix/description/

/**
 * Time complexity: O(log(n * m))
 * Space complexity: O(1)
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int L = 0, R = (n * m) - 1;
        while (L <= R) {
            int M = L + (R - L) / 2;
            int i = M / m;
            int j = M % m;
            if (matrix[i][j] < target) {
                L = M + 1;
            }
            else if(matrix[i][j] > target) {
                R = M - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};