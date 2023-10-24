// Problem: https://leetcode.com/problems/delete-node-in-a-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


/**
 * Time Complexity : O(1)
 * Space Complexity : O(1)
*/


class Solution {
public:
    void deleteNode(ListNode* node) {
        auto remove_node = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete(remove_node);
    }
};