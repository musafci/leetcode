// Problem: https://leetcode.com/problems/first-bad-version/description/


/**
 * Time complexity: O(log n)
 * Space complexity: O(1)
*/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int L = 1, R = n;
        while (L < R) {
            int M = L + (R - L) / 2;
            if (!isBadVersion(M)) L = M + 1;
            else R = M;
        }
        return L;
    }
};