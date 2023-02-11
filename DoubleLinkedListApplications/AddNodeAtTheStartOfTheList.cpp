#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
Node *tail = NULL;

void addNodeAtTheStartOfTheList(int x){
    Node * temp = new Node;
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;

    if(head == NULL){
        head = tail = temp;
    }else{
        temp->next = head;
        head->prev = temp;
        head = temp;
        
    }
}
int main(){
    addNodeAtTheStartOfTheList(2);
    addNodeAtTheStartOfTheList(3);

     Node *current = head;
    while(current != NULL){
        cout << current->data;
        current = current->next;
    }
    return 0;
}