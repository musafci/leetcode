// Problem: https://leetcode.com/problems/cousins-in-binary-tree-ii/description/

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
    // TC: O(N), SC: O(N); where N = total number of nodes
    TreeNode* replaceValueInTree(TreeNode* root) {
        root -> val = 0;
        queue<TreeNode*> Q;
        vector<TreeNode*> buffer;
        Q.push(root);
        while(!Q.empty()) {
            int n = Q.size();
            int sum = 0;
            buffer.clear();
            while(n--) {
                auto u = Q.front(); Q.pop();
                buffer.push_back(u);
                if (u -> left) { Q.push(u -> left); sum += u -> left -> val; }
                if (u -> right) { Q.push(u -> right); sum += u -> right -> val; }
            }
            for (auto &u : buffer) {
                int sibling_sum = 0;
                if (u -> left) sibling_sum += u -> left -> val;
                if (u -> right) sibling_sum += u -> right -> val;
                if (u -> left) u -> left -> val = sum - sibling_sum;
                if (u -> right) u -> right -> val = sum - sibling_sum;
            }
        }
        return root;
    }
};