#include <iostream>
#include <fstream>
using namespace std;

int f = -1;
int r = -1;
int q[5];
int n = 5;



void enqueue(){
    int val;
    if(r == n-1){
        cout << "queue overflow" << endl;
        return;
    }else{
        if(f == -1){
        f=0;
        }
        cout << "Insert Number" << endl;
        cin >> val;
        r++;
        q[r] = val;
        
    } 
   
};
void display(){
   for(int i = f; i<= r; i++){
        cout << q[i]; 
    }
    cout << endl;
};



int main(){
     char choice = 'y';
    while (choice == 'y') {
    enqueue();
    display();
    cout << "Do you want to continue? (y/n)";
    cin >> choice;
    }
     
     
   
    return 0; 
}
