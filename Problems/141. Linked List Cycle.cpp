// Problem: https://leetcode.com/problems/linked-list-cycle/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/**
 * Time Complexity : O(n)
 * Space Complexity : O(1)
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto slow = head; // declare slow pointer, currently value is head
        auto fast = head; // declare fast pointer, currently value is head

        while(fast && fast->next) { // while fast and fast->next exist
            slow = slow->next; // increment slow pointer
            fast = fast->next->next; // increment fast pointer twice
            if (slow == fast) return true; // if slow and fast pointers are equal then there is a cycle
        }
        return false;
    }
};