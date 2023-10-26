/**
 * Time Complexity : O(n)
 * Space Complexity : O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class MyLinkedList {
public:
    class ListNode {
        public:
        const static int DUMMY_VALUE = 0;
        int val;
        ListNode* next;
        ListNode(int _val = DUMMY_VALUE) {
            val = _val;
            next = nullptr;
        }
        ListNode(int _val, ListNode* _next) {
            val = _val;
            next = _next;
        }
    };

    int len;
    ListNode* dummyHead;

    MyLinkedList() {
        len = 0;
        dummyHead = new ListNode();
    }

    int get(int index) {
        if (index < 0 || index >= len) return -1;
        ListNode* copyHead = dummyHead->next;
        while(index--) {
            copyHead = copyHead->next;
        }
        return copyHead->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(len, val);
    }
    
    void addAtIndex(int index, int val) {
        if (index > len) return;
        ListNode* copyHead = dummyHead;
        while(index--) {
            copyHead = copyHead->next;
        }
        ListNode* created_block = new ListNode(val, copyHead->next);
        copyHead->next = created_block;
        len++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= len) return;
        ListNode* copyHead = dummyHead;
        while(index--) {
            copyHead = copyHead->next;
        }
        ListNode* delete_candidate = copyHead->next;
        copyHead->next = copyHead->next->next;
        delete(delete_candidate);
        len--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */