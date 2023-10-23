// Problem: https://leetcode.com/problems/reverse-linked-list/


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
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* previous = nullptr;
        while (current) {
            ListNode* nxt = current->next; // store what was previous connection
            current->next = previous; // change connection (rotate 180 degree)
            previous = current; // shift one step ahead
            current = nxt; // shift one step ahead
        }
        return previous; // return presetn head node.
    }
};