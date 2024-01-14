// Problem: https://leetcode.com/problems/queue-reconstruction-by-height/description/

/**
 * Time Complexity: O(N^2)
 * Space Complexity: O(N)
*/

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(),[](auto &p1, auto &p2){
            return p1[0] > p2[0] || (p1[0] == p2[0] && p1[1] < p2[1]);
        });
        vector<vector<int>> constructed_queue;
        for (int i = 0; i < (int) people.size(); i++) {
            constructed_queue.insert(constructed_queue.begin() + people[i][1], people[i]);
        }
        return constructed_queue;
    }
};