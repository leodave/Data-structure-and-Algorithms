#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
node *head = NULL;

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