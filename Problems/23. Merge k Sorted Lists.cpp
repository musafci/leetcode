// Problem: https://leetcode.com/problems/merge-k-sorted-lists/description/

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
 * Time Complexity : 
 * Space Complexity : 
*/

class Solution {
public:
    void addRear(ListNode*& dummyHead, int val) {
        ListNode* newNode = new ListNode(val);
        dummyHead->next = newNode;
        dummyHead = dummyHead->next;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2, ListNode*& dummyHead) {
        while (list1 && list2) {
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
        return dummyHead;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummyHead = new ListNode(0);
        for (int i = 0; i < lists.size(); i++) {
            mergeTwoLists(dummyHead->next, lists[i], dummyHead);
        }
        return dummyHead->next;
    }
};