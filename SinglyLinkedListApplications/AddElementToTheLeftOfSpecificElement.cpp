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

void AddElementLeftToSpecificElement(int insert, int leftOf){
    Node *temp = new Node;
    temp->data = insert;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        Node *temp2 = head;
        Node *temp3;
        while(temp2->data != leftOf){
            temp3 = temp2;
            temp2 = temp2->next;

        };
        temp->next = temp2;
        temp3->next = temp;
       

    }
}
int main(){
    addElementAtTheEndOfLinkedList(1);
    addElementAtTheEndOfLinkedList(4);
    addElementAtTheEndOfLinkedList(5);
    AddElementLeftToSpecificElement(2,4);
    AddElementLeftToSpecificElement(3,4);
    
    Node *current = head;
    while(current != NULL ){
        cout << current->data;
        current = current->next;
    }
    /
}