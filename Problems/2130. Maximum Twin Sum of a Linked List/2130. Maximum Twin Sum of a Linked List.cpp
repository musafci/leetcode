// Problem: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/

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
    ListNode* reverseList(ListNode* head) { // Similar to proglem: 206. Reverse Linked List
        ListNode* current = head;
        ListNode* previous = nullptr;
        while (current) {
            ListNode* nxt = current->next;
            current->next = previous;
            previous = current;
            current = nxt;
        }
        return previous;
    }

    int pairSum(ListNode* head) {
        auto slow = head; // declare slow pointer, currently value is head
        auto fast = head; // declare fast pointer, currently value is head
        while(fast && fast->next) { // traverse till fast->next is not null
            slow = slow->next; // increment slow pointer
            fast = fast->next->next; // increment fast pointer twice
        }
        auto mid_head = reverseList(slow); // reverse the list starting from slow pointer (currently slow pointer stay at middle of linked list)
        int maxPairSum = 0; // declare maxPairSum variable
        while(mid_head) { // traverse mid_head
            maxPairSum = max(maxPairSum, head->val + mid_head->val); // update maxPairSum with max value between 'head' and 'mid_head'
            head = head->next; // increment head
            mid_head = mid_head->next; // increment mid_head
        }
        return maxPairSum; // return maxPairSum
    }
};