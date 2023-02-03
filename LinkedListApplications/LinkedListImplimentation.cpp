#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
node *head = NULL;

int main(){
 node node1;
 node1.data = 5;
 cout << node1.data;
}