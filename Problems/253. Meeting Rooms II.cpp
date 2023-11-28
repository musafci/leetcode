// Problem: https://leetcode.com/problems/meeting-rooms-ii/description/

// TC: O(N)
// MC: O(N)
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        map<int, int>calendar;
        for(auto it : intervals)
        {
            int st = it[0];
            int en = it[1];
            calendar[st]++;
            calendar[en]--;
        }
        int cnt = 0, noOfRoom = 0;
        for(auto it : calendar)
        {
            cnt += it.second;
            noOfRoom = max(noOfRoom, cnt);
        }
        return noOfRoom;
    }
};