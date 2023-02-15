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

void addElementToTheLeftOfSpecificData(int data, int leftOf){
    Node *temp = new Node;
    temp->data = data;
    temp->next = temp;

    if(head == NULL){
        head = temp;
    }else{
        Node *temp2 = head;
        Node *temp3;
        if(head->data == leftOf){
            while(temp2->next != head){
                temp2 = temp2->next;
            }
            temp->next = head;
            temp2->next = temp;
            head = temp;
        }else{
        while(temp2->data != leftOf){
            temp3 = temp2;
            temp2 = temp2->next;
        }
        temp->next = temp2;
        temp3->next = temp;
        }
        
    }
}

int main(){
    addElementAtTheEndOfTheList(2);
    addElementAtTheEndOfTheList(3);
    addElementToTheLeftOfSpecificData(5,2);
   
    Node *current = head;
    while(current->next != head){
        cout << current->data;
        current = current->next;
    }
    cout << current->data;
}