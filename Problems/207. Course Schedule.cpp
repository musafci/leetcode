// Problem: https://leetcode.com/problems/course-schedule/description/

class Solution {
public:
    bool dfs(vector<int>&col, vector<vector<int> >& gr, int u, int pr = -1) {
        col[u] = 1;
        for(auto v : gr[u]) {
            if(col[v] == 0 && dfs(col, gr, v, u)) return true;
            else if(col[v] == 1) return true;
        }
        col[u] = 2;
        return false;
    }
    // TC: O(N); where N = |prerequisites|
    // SC: O(N);
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>col(numCourses + 1, 0);
        vector<vector<int> >gr(numCourses + 1);
        for(auto it : prerequisites) {
            int u = it[0];
            int v = it[1];
            gr[v].push_back(u);
        }
        for(int i = 0; i < numCourses; i++) {
            if(col[i] == 0) {
                bool hasCycle = dfs(col, gr, i);
                if(hasCycle) return false;
            }
        }
        return true;
    }
};