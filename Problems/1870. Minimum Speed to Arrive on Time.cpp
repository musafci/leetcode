// Problem: https://leetcode.com/problems/minimum-speed-to-arrive-on-time/description/

class Solution {
public:
    static const int MAX_SPEED = INT_MAX / 2;
    double calculateElapsedTime(vector<int>& dist, int currSpeed) {
        double elapsed_time = 0.0;
        for (int i = 0; i < dist.size(); i++)
        {
            if (i + 1 == dist.size())
                elapsed_time += 1.00 * dist[i] / currSpeed;
            else
                elapsed_time += (dist[i] + currSpeed - 1) / currSpeed; // ceil(a / b) = (a + b - 1) / b
        }
        return elapsed_time;
    }
    // TC: O(NlogN), SC: O(1)
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int L = 1, R = MAX_SPEED;
        while(L < R)
        {
            int M = L + (R - L) / 2;
            if (calculateElapsedTime(dist, M) > hour) L = M + 1;
            else R = M;
        }
        return L == MAX_SPEED ? -1 : L;
    }
};