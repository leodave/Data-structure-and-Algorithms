#include <iostream>
using namespace std;

//Not Finished;

struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
Node *tail = NULL;


void addNOdeToTheRightOfSpecificData(int insert, int rightOf){
    Node *temp = new Node;
    temp->data = insert;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = tail = temp;
    }else 
    {
        if(head->data == rightOf){
             if(head->next == NULL){
                 tail = temp;
             }
            temp->prev = head;
            temp->next = head->next;
            head->next = temp;
            head->next->prev = temp;
        }
        else{
            Node *temp2 = head;
            while(temp2->data != rightOf){
                temp2 = temp2->next;
                
            }
            if(temp2->next == NULL){
            tail = temp;
            }
            temp->prev = temp2;
            temp->next = temp2->next;
            temp2->next = temp;
            temp2->next->prev = temp;
        }
    }
}   
// for testing
void addNodeToTheEndOfTheList(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = tail = temp;
    }else{
       tail->next = temp;
       temp->prev = tail;
       tail = temp;
     }
}
int main(){
    addNodeToTheEndOfTheList(2);
    addNodeToTheEndOfTheList(3);
    addNodeToTheEndOfTheList(5);
    addNOdeToTheRightOfSpecificData(4,5);
  

     Node *current = tail;
    while(current != NULL){
        cout << current->data;
        current = current->prev;
    }
    return 0;

}
