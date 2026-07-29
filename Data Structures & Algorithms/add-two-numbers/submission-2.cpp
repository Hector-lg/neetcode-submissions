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
    ListNode dummy(0); // Sin el asterisco, sin el 'new'. Es un objeto local.
    ListNode* acutalResultado = &dummy; // Sacamos su dirección de memoria con '&' para el tail.
    int carry = 0;

    while(l1 != nullptr || l2!=nullptr || carry !=0){
        int valor1 = (l1 != nullptr) ? l1->val : 0;
        int valor2 = (l2 != nullptr) ? l2->val : 0;

        int suma = valor1 + valor2+ carry;
        int digito = suma%10;
        carry = suma /10;

        acutalResultado->next = new ListNode(digito);
        acutalResultado = acutalResultado->next;

        if(l1 != nullptr) l1= l1->next;
        if(l2 != nullptr) l2 =l2->next;
    }
    return dummy.next;
    }
};
