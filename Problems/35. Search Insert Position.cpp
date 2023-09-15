// Problem- https://leetcode.com/problems/search-insert-position/description/

/*
    Step-by-step Binary Search Algorithm::

    Step 01: Divide the search space into two halves
    Step 02: Compare the middle element of the search space with the key.
    Step 03: If the key is found at middle element, the process is terminated.
    Step 04: If the key is not found at middle element, choose which half will be used as the next search space.
            If the key is smaller than the middle element, then the left side is used for next search.
            If the key is larger than the middle element, then the right side is used for next search.
    Step 05: This process is continued until the key is found or the total search space is exhausted.
*/ 

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }        
    }

    return low;
}


int main() {
    vector<int> nums = {2, 3, 6, 8, 27, 43};
    int target = 3;

    int index = searchInsert(nums, target);

    cout << "Target " << target << " should be inserted at index " << index << endl;

    return 0;
}

// Time Complexity: O(log n)
// Space Complexity: 