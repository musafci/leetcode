// Problem: https://leetcode.com/problems/majority-element/description/
// Approach: https://www.geeksforgeeks.org/boyer-moore-majority-voting-algorithm/

/**
 * Time Complexity : O(n)
 * Space Complexity : O(1)
*/


#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element
int findMajority(vector<int>& nums) {
    int candidate = -1, votes = 0;
    for (int num : nums) {
        if (votes == 0) {
            candidate = num;
            votes = 1;
        } else if (num == candidate) {
            votes++;
        } else {
            votes--;
        }
    }

    int count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return candidate;
    }
    
    return -1;
}

int main() {
    vector<int> nums = {1, 1, 1, 1, 2, 3, 4};
    int majority = findMajority(nums);
    
    if (majority != -1) {
        cout << "The majority element is: " << majority << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
