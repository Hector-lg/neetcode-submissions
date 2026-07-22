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
    bool hasCycle(ListNode* head) {
        
    /*
    Tener dos punteros que empiezan en la cabeza de la lista
    Liebere y tortuga apuntando a la head
    luego
    un while que mientras tortuga o libere no sean nullptr se ejecute
    luego justo abajo
        tortuga igual al siguiente
        liebre igual al siguiente siguiente
        un if que si estan parados en el mismo !puntero! el val no sirve porque puede tener valores repetidos
            return true
    si el ciclo termina es porque no habia ciclo false*/
    ListNode *liebre = head;
    ListNode *tortuga = head;
    while(liebre != nullptr && liebre->next != nullptr){
        tortuga = tortuga ->next;
        liebre = liebre->next->next;
        if(tortuga== liebre){
            return true;
        }
    }
    return false;
    }
};
