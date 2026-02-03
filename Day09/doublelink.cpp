#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        data=data;
        next=NULL;
        prev=NULL;
    }
    void insertAtEnd(Node* &head, int val){
        Node* node = new Node(val);
        if(head==NULL){
            head=node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=node;
        node->prev=temp;
    
    }       
};