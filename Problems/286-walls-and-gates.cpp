// Problem: https://leetcode.com/problems/walls-and-gates/

/**
 * Time Complexity: O(N * M)
 * Space Complexity: O(N * M)
*/

class Solution {
public:
    void wallsAndGates(vector<vector<int>>& dist) {
        queue<pair<int, int>> Q;
        int n = dist.size();
        int m = dist[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (dist[i][j] == 0) {
                    Q.push({i, j});
                }
            }
        }
        static vector<int> dir = {1, 0, -1, 0, 1};
        while(!Q.empty()) {
            auto u = Q.front(); Q.pop();
            for (int i = 0; i < 4; i++) {
                int vr = u.first + dir[i];
                int vc = u.second + dir[i + 1];
                if (vr < 0 || vc < 0 || vr >= n || vc >= m || dist[vr][vc] == -1) continue;
                if (dist[vr][vc] > dist[u.first][u.second] + 1) {
                    dist[vr][vc] = dist[u.first][u.second] + 1;
                    Q.push({vr, vc});
                }
            }
        }
    }
};