#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
Node *tail = NULL;

//for testing
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

void deleteNodeUsingData(int x){
    Node *del = head;
    if(head == NULL){
        cout << "Empty List";
    }else{
        Node *del2;
        while(del->data != x ){
            del2 = del;
            del = del->next;
        }
        del2->next = del->next;
        del->next->prev = del2;
        delete del;
    }
}

int main() {
    addNodeToTheEndOfTheList(3);
    addNodeToTheEndOfTheList(2);
    addNodeToTheEndOfTheList(4);
    deleteNodeUsingData(2);

    Node *current = head;
    while(current != NULL){
        cout << current->data;
        current = current->next;
    }
    return 0;
}