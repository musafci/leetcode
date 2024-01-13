// Problem:https://leetcode.com/problems/non-overlapping-intervals/description/

/**
 * Time Complexity: O(NlogN)
 * Space Complexity: O(1)
*/

class Solution {
public:
    static bool sort_asc(vector<int> &a, vector<int> &b) {
        if (a[1] == b[1]) return a[0] < b[0];
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), sort_asc);
        int max_valid_intervals = 1;
        int prev_end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (prev_end <= intervals[i][0])
            {
                prev_end = intervals[i][1];
                max_valid_intervals++;
            }
        }
        return intervals.size() - max_valid_intervals;
    }
};