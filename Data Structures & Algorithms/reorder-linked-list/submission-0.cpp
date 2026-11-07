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
void reorderList(ListNode* head) {
    if(head == nullptr) return;

    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* tail = slow->next;
    ListNode* prev = nullptr;
    slow->next = nullptr;
    while(tail != nullptr){
        ListNode* tmp = tail->next;
        tail->next = prev;
        prev = tail;
        tail = tmp;
    }

    ListNode* end = prev;
    ListNode* begin = head;
    while(end != nullptr){
        ListNode* tmp1 = begin->next;
        ListNode* tmp2 = end->next;
        begin->next = end;
        end->next = tmp1;

        begin = tmp1;
        end = tmp2;
    }

    return;
}
};
