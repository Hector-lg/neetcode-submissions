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
        ListNode* dummy = new ListNode(0); dummy->next = head;
   
    ListNode* puntero1 = head;
    ListNode* puntero2 = dummy;
    
    for (int i =0; i<n; i++){
        puntero1 = puntero1->next;
    }
    while(puntero1 != nullptr){
        puntero1 = puntero1->next;
        puntero2 = puntero2-> next;
        
    }
    puntero2 ->next = puntero2->next->next;

    return dummy->next;

    }
};
