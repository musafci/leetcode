// Problem: https://leetcode.com/problems/maximum-depth-of-binary-tree/description/


/**
 * Time complexity: O(N), where N is the number of nodes in the tree
 * Space complexity: O(H), where H is the height of the tree
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root ==  nullptr) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};