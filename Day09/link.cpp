#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertMiddle(Node* head, int x) {
    Node* newNode = new Node();
    newNode->data = x;

    // if list is empty
    if (head == NULL) {
        newNode->next = NULL;
        return newNode;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    newNode->next = slow->next;
    slow->next = newNode;

    return head;
}
