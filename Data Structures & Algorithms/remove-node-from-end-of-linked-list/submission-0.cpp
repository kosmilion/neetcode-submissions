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

class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) { 
    ListNode dummy;
    ListNode* tail = &dummy;
    tail->next = head;
    ListNode* curr = tail;
    for(int i = 1; i <= n; i++){ // przesuniecie o n + 1
        if(tail != nullptr){
            tail = tail->next;
        }
    }

    while(tail->next != nullptr){ // tail != nullptr-a
        tail = tail->next;
        curr = curr->next;
    }

    ListNode* tmp = curr->next;
    curr->next = curr->next->next;
    delete tmp;

    return dummy.next;
}
};
