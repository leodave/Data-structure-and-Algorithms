#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}; 
Node *head = NULL;

//for testing
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

void addElementToTheRightOfSpecificData(int data, int rightOf){
    Node *temp = new Node;
    temp->data = data;
    temp->next = temp;

    if(head == NULL){
        head = temp;
    }else{
        Node *temp2 = head;
        while(temp2->data != rightOf){
            temp2 = temp2->next;
        }
        temp->next = temp2->next;
        temp2->next = temp;    
    }
}

int main(){
    addElementAtTheEndOfTheList(2);
    addElementAtTheEndOfTheList(3);
    addElementToTheRightOfSpecificData(5,3);
   
    Node *current = head;
    while(current->next != head){
        cout << current->data;
        current = current->next;
    }
    cout << current->data;
}