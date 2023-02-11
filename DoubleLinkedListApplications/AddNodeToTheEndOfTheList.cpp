#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
Node *tail = NULL;

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
int main() {
    addNodeToTheEndOfTheList(3);
    addNodeToTheEndOfTheList(2);
    addNodeToTheEndOfTheList(4);

    Node *current = tail;
    while(current != NULL){
        cout << current->data;
        current = current->prev;
    }
    return 0;
}