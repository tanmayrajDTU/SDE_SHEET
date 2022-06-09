#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* l1, Node<int>* l2)
{
    if(!l1)
        return l2;
    else if(!l2)
        return l1;
    
    if(l1->data < l2->data) {
        l1->next = sortTwoLists(l1->next, l2);
        return l1;
    }
    else {
        l2->next = sortTwoLists(l1, l2->next);
        return l2;
    }
}
