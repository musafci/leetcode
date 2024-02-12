// Problem: https://leetcode.com/problems/symmetric-tree/description/

/**
 * Time Complexity: O(N)
 * Space Complexity: O(H)
*/

class Solution {
private:
    // isMirror(p, q) returns true iff p and q are mirror trees.
    bool isMirror(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr) return false;
        return (p -> val == q -> val) &&
               (isMirror(p -> left, q -> right)) &&
               (isMirror(p -> right, q -> left));
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return isMirror(root -> left, root -> right);
    }
};
