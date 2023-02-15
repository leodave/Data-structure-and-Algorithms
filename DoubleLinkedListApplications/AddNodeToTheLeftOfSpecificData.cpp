#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
Node *tail = NULL;

void addNOdeToTheLeftOfSpecificData(int insert, int leftOf){
    Node *temp = new Node;
    temp->data = insert;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = tail = temp;
    }else if(head->data == leftOf){
        temp->next = head;
        head->prev = temp;
        head = temp;
     }else{
        Node *temp2 = head;
        Node *temp3;
        while(temp2->data != leftOf){
         temp3 = temp2;
         temp2 = temp2->next;
         }
         temp->prev = temp3;
         temp->next = temp3->next;
         temp3->next = temp;
         temp2->prev = temp;
    }
}
// for testing
void addNodeToTheEndOfTheList(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = tail = temp;
    }else{
       tail->next = temp;
       temp->prev = tail;
       tail = temp;
     }
}
int main(){
    addNodeToTheEndOfTheList(2);
    addNodeToTheEndOfTheList(3);
    addNodeToTheEndOfTheList(5);
    addNOdeToTheLeftOfSpecificData(4,5);

     Node *current = tail;
    while(current != NULL){
        cout << current->data;
        current = current->prev;
    }
    return 0;

}
