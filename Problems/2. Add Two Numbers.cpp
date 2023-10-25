// Problem: https://leetcode.com/problems/add-two-numbers/description/

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
 * Time Complexity : O(n+m)
 * Space Complexity : O(n+m)
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto dummyHead = new ListNode(0); // create a dummy node
        auto copyDummyHead = dummyHead; // copy dummy node
        int carry = 0;

        while (l1 || l2 || carry) {
            int val = carry;
            if (l1) {
                val += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                val += l2->val;
                l2 = l2->next;
            }
            carry = (val >= 10) ? 1: 0;
            dummyHead->next = new ListNode(val % 10);
            dummyHead = dummyHead->next;
        }
        return copyDummyHead->next;
    }
};