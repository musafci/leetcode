// Problem: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/**
 * Time Complexity : O(n)
 * Space Complexity : O(1)
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto slow = new ListNode(0, head); // create a dummy node
        auto cslow = slow; // create a copy of dummy node
        auto fast = slow; // create a fast pointer, at present that indicate dummy node

        while(n--) {
            fast = fast->next; // fast pointer move n steps ahead
        }
        while(fast && fast->next) {
            slow = slow->next; // slow pointer move one step ahead
            fast = fast->next; // fast pointer move one step ahead
        }
        auto remove_node = slow->next; // store the node to be removed
        slow->next = slow->next->next; // slow pointer er next e, slow pointer er next er next er address a rakha hocche.
        delete(remove_node); // delete the node
        return cslow->next; // return the head
    }
};