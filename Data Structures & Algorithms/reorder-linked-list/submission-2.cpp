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
ListNode* reverseList(ListNode* head){
    ListNode *prev = nullptr;
    ListNode *curr = head;
    while(curr != nullptr){
        ListNode *nextTemp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

    void reorderList(ListNode* head) {
        
    //primero encontrar la mitad 
    ListNode *liebre = head;
    ListNode *tortuga = head;
    while (
    liebre->next != nullptr &&
    liebre->next->next != nullptr){
        tortuga = tortuga ->next;
        liebre = liebre->next->next;
    }
    ListNode *inicioSecond = tortuga->next;
    tortuga -> next = nullptr;
    ListNode* secondPart= reverseList(inicioSecond);
    ListNode* firstPart = head;
    while(secondPart !=nullptr){
        ListNode *p1 = firstPart ->next;
        ListNode *p2 = secondPart->next;
        
        firstPart->next = secondPart;
        secondPart->next = p1;

        firstPart = p1;
        secondPart = p2;
    }
    }
};
