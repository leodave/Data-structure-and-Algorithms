#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};
Node *head = NULL;

void addElementAtTheEndOfLinkedList(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else {
        Node *temp2 = head;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp2->next = temp;

    }
}

void AddElementToTheRightOfSpecificElement(int insert, int rightOf){
    Node *temp = new Node;
    temp->data = insert;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else {
        Node *temp2 = head;
        while(temp2->data != rightOf){
            temp2 = temp2->next;
        }
        temp->next = temp2->next;
        temp2->next = temp;
    }
}

int main(){
    addElementAtTheEndOfLinkedList(3);
    addElementAtTheEndOfLinkedList(4);
    addElementAtTheEndOfLinkedList(2);
    addElementAtTheEndOfLinkedList(9);
    AddElementToTheRightOfSpecificElement(5,2);
    AddElementToTheRightOfSpecificElement(6,2);
    AddElementToTheRightOfSpecificElement(4,2);

    Node *current = head;
    while(current != NULL){
        cout << current->data;
        current = current->next;
    }
}