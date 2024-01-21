// Problem: https://leetcode.com/problems/employee-importance/description/

/**
 * Time complexity O(N); where N = |employees|
 * Space complexity O(N)
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> adj;
        for (auto &emp : employees) {
            adj[emp -> id] = emp;
        }
        function<int(int)> dfs = [&](int id) -> int {
            auto &currEmployee = adj[id];
            int sum = currEmployee -> importance;
            for (int ch_id : currEmployee -> subordinates) {
                sum += dfs(ch_id);
            }
            return sum;
        };
        return dfs(id);
    }
};