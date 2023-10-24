//Problem: https://leetcode.com/problems/merge-two-sorted-lists/description/

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
 * Space Complexity : O(1)
*/

class Solution {
public:
    void addRear(ListNode*& dummyHead, int val) {
        dummyHead->next = new ListNode(val);
        dummyHead = dummyHead->next;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        auto dummyHead = new ListNode(0);
        auto copyDummyHead = dummyHead;

        while(list1 && list2) {
            if (list1->val < list2->val) {
                addRear(dummyHead, list1->val);
                list1 = list1->next;
            } else {
                addRear(dummyHead, list2->val);
                list2 = list2->next;
            }
        }

        if (list1) {
            dummyHead->next = list1;
        } else {
            dummyHead->next = list2;
        }
        return copyDummyHead->next;
    }
}