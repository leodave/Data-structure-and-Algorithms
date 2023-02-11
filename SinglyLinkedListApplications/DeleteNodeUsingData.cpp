#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next; 
};
Node *head = NULL;

//for testing purpose
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
void deleteNodeUsingData( int x){
    if(head == NULL){
        cout << "List Empty";
    }else {
        Node *temp = head;
        Node *temp2;
        while(temp->data != x){
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = temp->next;
        delete temp;
    }
}
int main(){
    AddElementAtTheStartOfLinkedList(2);
    AddElementAtTheStartOfLinkedList(4);
    AddElementAtTheStartOfLinkedList(6);
    deleteNodeUsingData(4);

    Node *current = head;
    while(current != NULL){
        cout << current->data;
        current = current->next;
    }
}