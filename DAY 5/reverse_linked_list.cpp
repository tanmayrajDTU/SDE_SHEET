#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *P = NULL;
    LinkedListNode<int> *C = head;
    LinkedListNode<int> *N;

    while(C) {
        N = C->next;
        C->next = P;
        // update pointers
        P = C;
        C = N;
    }
    return P;
}
