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
 void deleteNodeFromEndOfList(){
    if(head == NULL){
        cout << "List EMpty";
    }
    Node *del = head;
    Node *del2;
    while(del->next != head){
        del2 = del;
        del = del->next;
    }
    del2->next = head;
    delete del;

 }

 int main(){
    addElementAtTheEndOfTheList(5);
    addElementAtTheEndOfTheList(7);
    addElementAtTheEndOfTheList(9);
    deleteNodeFromEndOfList();
    deleteNodeFromEndOfList();
    Node *current = head;
    while(current->next != head){
        cout << current->data;
        current = current->next;
    }
    cout << current->data;
}