// Problem: https://leetcode.com/problems/time-needed-to-inform-all-employees/description/

class Solution {
public:
    vector<vector<int>> adjacent_nodes;
    int find_min_time(int u, vector<int>&informTime)
    {
        int max_subordinate_time = 0;
        for (auto v : adjacent_nodes[u])
        {
            max_subordinate_time = max(max_subordinate_time, find_min_time(v, informTime));
        }
        return max_subordinate_time + informTime[u];
    }
    // TC: O(N), where N = number of nodes
    // SC: O(N)
    int numOfMinutes(int n, int headID, vector<int>& parent, vector<int>& informTime) {
        adjacent_nodes.clear();
        adjacent_nodes.resize(n + 1);
        for (int i = 0; i < parent.size(); i++)
        {
            if (parent[i] != -1)
            {
                adjacent_nodes[parent[i]].push_back(i);
            }
        }
        return find_min_time(headID, informTime);
    }
};