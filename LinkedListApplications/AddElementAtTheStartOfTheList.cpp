#include <iostream>
using namespace std;

 struct Node {
        int data;
        Node *next;
    };
Node *head = NULL;

void AddElementAtTheStartOfLinkedList(int x){
   Node *temp = new Node;
   temp->data = x;
   temp->next = NULL;
   if(head == NULL){
    head = temp;
   }else{
    Node *temp2 = head;  
    temp->next = temp2;
    head = temp;
   }
}

int main(){
    AddElementAtTheStartOfLinkedList(5);
    AddElementAtTheStartOfLinkedList(7);
    AddElementAtTheStartOfLinkedList(9);
    Node *current = head;
    while( current != NULL){
        cout << current->data;
        current = current->next;
    }
}