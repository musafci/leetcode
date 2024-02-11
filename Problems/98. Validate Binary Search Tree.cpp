// Problem: https://leetcode.com/problems/validate-binary-search-tree/description/

/**
 * Time Complexity: O(N)
 * Space Complexity: O(N)
*/

class Solution {
private:
    bool isValidBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
        if (root == nullptr) return true;
        return (minNode == nullptr || minNode -> val < root -> val) &&
               (maxNode == nullptr || maxNode -> val > root -> val) &&
               isValidBST(root -> left, minNode, root) &&
               isValidBST(root -> right, root, maxNode);
    }
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, nullptr, nullptr);
    }
};