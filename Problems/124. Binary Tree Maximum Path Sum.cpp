// Problem: https://leetcode.com/problems/binary-tree-maximum-path-sum/description/


/**
 * Time Complexity: O(N)
 * Space Complexity: O(N)
*/

class Solution {
public:
    int path_sum;
    int find_max_chain_sum(TreeNode* root)
    {
        if (root == NULL) return 0;
        int L = find_max_chain_sum(root -> left);
        int R = find_max_chain_sum(root -> right);
        path_sum = max(path_sum, root -> val + L + R);
        return max(0, max(L, R) + root -> val);
    }
    int maxPathSum(TreeNode* root)
    {
        path_sum = INT_MIN / 2;
        find_max_chain_sum(root);
        return path_sum;
    }
};