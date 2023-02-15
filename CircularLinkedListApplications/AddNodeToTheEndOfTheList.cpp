#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}; 
Node *head = NULL;

void addElementAtTheEndOfTheList(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = temp;

    if(head == NULL){
        head = temp;
    }else{
        Node *temp2 = head;
        while(temp2->next != head){
            temp2 = temp2->next;
        }
        temp2->next = temp;
        temp->next = head;
    }
}

int main(){
    addElementAtTheEndOfTheList(5);
    addElementAtTheEndOfTheList(7);
    addElementAtTheEndOfTheList(9);
    Node *current = head;
    while(current->next != head){
        cout << current->data;
        current = current->next;
    }
    cout << current->data;
}