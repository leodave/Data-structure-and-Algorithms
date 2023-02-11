#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
Node *tail = NULL;

void addNOdeToTheRightOfSpecificData(int insert, int rightOf){
    Node *temp = new Node;
    temp->data = insert;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = tail = temp;
    }else if(tail->data == rightOf){
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
     }else{
        Node *temp2 = head;
        Node *temp3;
        while(temp2->data != rightOf){
         temp3 = temp2->next;
         temp2 = temp2->next;
         }
         temp->prev = temp2;
         temp->next = temp2->next;
         temp3->prev = temp;
         temp2->next = temp;
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
    addNOdeToTheRightOfSpecificData(4,5);

     Node *current = head;
    while(current != NULL){
        cout << current->data;
        current = current->next;
    }
    return 0;

}
