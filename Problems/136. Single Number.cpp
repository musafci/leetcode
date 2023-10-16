// Problem: https://leetcode.com/problems/single-number/description/

#include <bits/stdc++.h>

using namespace std;


//Solution 01
/*
    //Time Complexity: O(N)
    //Space Complexity: O(N)
    int singleNumber(vector<int>& nums) {
        map <int, int> occ;
        for (int val : nums) {
            // Increment the value associated with the key `val`, or create a new key-value pair with a value 
            // of 1 if the key does not already exist.
            occ[val]++;
        }
        for (auto pr : occ) {
            if (pr.second == 1) {
                return pr.first;
            }
        }
        return -1;
    }
*/


// Solution 02
//Time Complexity: O(N)
//Space Complexity: O(1)
int singleNumber(vector<int>& nums) {
    int single_elem = 0;
    for (int val : nums) {
        single_elem ^= val;
    }
    return single_elem;
}

int main () {
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = singleNumber(nums);
    cout << result << endl;
    return 0;
}


/**
 * Leetcode solution
 * Time Complexity: O(N)
 * Space Complexity: O(1)
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single_elem = 0;
        for (int val : nums) {
            single_elem ^= val; //xor operation
        }
        return single_elem;
    }
};