// Problem: https://leetcode.com/problems/merge-sorted-array/description/

/**
 * Time Complexity: O(N)
 * Space Complexity: O(1)
*/

// class Solution
// {
// public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while(i >= 0 and j >= 0)
        {
            if(nums1[i] < nums2[j])
            {
                nums1[k--] = nums2[j--];
            }
            else
            {
                nums1[k--] = nums1[i--];
            }
        }
        while(j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
// };


int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    std::vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

    std::cout << "Merged Array: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    
    return 0;
}