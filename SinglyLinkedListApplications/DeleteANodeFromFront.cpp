#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
node *head = NULL;

//for testing purpose
void addElementAtTheEndOfLinkedList(int x){
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else {
        node *temp2 = head;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp2->next = temp;

    }
}

void deleteNodeFromFront(){
    node *temp;
    if(head == NULL){
        cout << "empty list";
    }else{
        temp = head;
        head = head->next;
        delete temp;
    }

}
int main() {
    addElementAtTheEndOfLinkedList(5);
    addElementAtTheEndOfLinkedList(4);
    addElementAtTheEndOfLinkedList(2);
    deleteNodeFromFront();

    node *current = head;
    while(current != NULL){
        cout << current->data;
        current = current->next;
    }
}