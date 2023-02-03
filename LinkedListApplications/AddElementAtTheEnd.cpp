#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
node *head = NULL;

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
int main(){
    addElementAtTheEndOfLinkedList(5);
    addElementAtTheEndOfLinkedList(7);
    addElementAtTheEndOfLinkedList(9);
    node *current = head;
    while(current != NULL){
        cout << current->data;
        current = current->next;
    }
}