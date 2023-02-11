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


void deleteNodeFromEndOfLinkedList(){
    Node *temp;
    Node *temp2;
    if(head == NULL){
        cout << "List Empty";
    }else{
       temp = head;
       while(temp->next != NULL){
        temp2 = temp;
        temp = temp->next;
       }
       temp2->next = NULL;
       delete temp;
    }

}
int main(){
    AddElementAtTheStartOfLinkedList(5);
    AddElementAtTheStartOfLinkedList(7);
    AddElementAtTheStartOfLinkedList(9);
    deleteNodeFromEndOfLinkedList();
    Node *current = head;
    while( current != NULL){
        cout << current->data;
        current = current->next;
    }
}