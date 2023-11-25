/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    // TC: O(N), where N = number of elements in the tree
    // MC: O(B), where B = maximum number of elements in a single level of the given tree
    Node* connect(Node* root) {
        if (!root) return root;
        queue<Node*> Q;
        Q.push(root);
        
        while(!Q.empty()) {
            int len = Q.size();
            for (int i = 0; i < len; i++) {
                auto u = Q.front();
                Q.pop();
                if (i + 1 < len) u -> next = Q.front();
                if (u -> left) Q.push(u -> left);
                if (u -> right) Q.push(u -> right);
            }
        }
        
        return root;
    }
};