#include <stdio.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int test() {

        Node* head = NULL;
        Node* second = NULL;
        Node* third = NULL;

        // allocate 3 nodes in the heap
        head = new Node();
        second = new Node();
        third = new Node();

        head->data = 1;
        head->next = second;

        second->data = 2;
        second->next = third;

        third->data = 3;
        third->next = NULL;

        int data = third->next->data;

        return data;
}
