#include <iostream>
using namespace std;
int f= 0;
int r = 3;
int n = 4;

struct Node {
    string name;
    int age;
};
Node q[5]= {{"dawit", 12}, {"ephi", 13}, {"henok", 15}, {"redi", 16}, {"eden", 18}};

void dequeue(){
    if(f== -1 || f > r){
        cout << "queue underflow";
    }else{
        cout << "name of removed " << q[f].name << endl;
        cout << "age of removed " << q[f].age << endl;
        f++;


    }
}
void display(){
   for(int i = f; i<= r; i++){
        cout << q[i].name << endl;
        cout << q[i].age << "|" << endl;
    }
    cout << endl;
};



int main(){
     char choice = 'y';
    while (choice == 'y') {
    dequeue();
    display();
    cout << "Do you want to continue? (y/n)";
    cin >> choice;
    }
     
     
   
    return 0; 
}
