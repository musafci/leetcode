// Problem: https://leetcode.com/problems/battleships-in-a-board/description/

/**
 * Time Complexity: O(N * M)
 * Space Complexity: O(1)
*/

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int shipCount = 0;
        int n = board.size(), m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'X') {
                    if (i == 0) {
                        shipCount += (j == 0) || (board[i][j - 1] == '.');
                    }
                    else if (j == 0) {
                        shipCount += (i == 0) || (board[i - 1][j] == '.');
                    }
                    else {
                        shipCount += board[i - 1][j] == '.' && board[i][j - 1] == '.';
                    }
                }
            }
        }
        return shipCount;
    }
};