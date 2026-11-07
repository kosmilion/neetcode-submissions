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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy;
    ListNode* curr = &dummy;
    int overflow = 0;
    int val1 = 0;
    int val2 = 0;
    while(l1 != nullptr || l2 != nullptr || overflow != 0){
        val1 = 0;
        val2 = 0;
        if(l1 != nullptr) val1 = l1->val;
        if(l2 != nullptr) val2 = l2->val;
        int sum = val1 + val2 + overflow;
        overflow = sum / 10;
        sum %= 10;
        ListNode* node = new ListNode(sum);
        curr->next = node;
        curr = curr->next;

        if(l1 != nullptr) l1 = l1->next;
        if(l2 != nullptr) l2 = l2->next; 
    }

    return dummy.next;
}
};
