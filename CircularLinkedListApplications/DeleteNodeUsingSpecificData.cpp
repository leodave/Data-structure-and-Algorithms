#include <iostream>
using namespace std;
struct Node {
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
};
 void deleteNodeUsingSpecificData(int x){
    if(head == NULL){
        cout << "List EMpty";
    }
    Node *del = head;
    Node *del2;
    if(head->data == x){
        Node *del3 = head;
        while(del3->next != head){
            del3 = del3->next;
        }
        del3->next = head->next;
        head = head->next;
        delete del;
    }else{
    while(del->data != x){
        del2 = del;
        del = del->next;
    };
    del2->next = del->next;
    delete del;
    }

 }

 int main(){
    addElementAtTheEndOfTheList(5);
    addElementAtTheEndOfTheList(7);
    addElementAtTheEndOfTheList(9);
    deleteNodeUsingSpecificData(5);
    Node *current = head;
    while(current->next != head){
        cout << current->data;
        current = current->next;
    }
    cout << current->data;
}