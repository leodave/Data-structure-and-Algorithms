#include <iostream>
using namespace std;


int q[5]= {1,2,3,4};
int f= 0;
int r = 3;
int n = 4;
;

void dequeue(){
    if(f == -1 || f > r){
        cout << "queue underflow" << endl;
    }else{
        cout << "element to delete is " << q[f] << endl;
        f++;
    };
}
void display(){
    for(int i = f; i <= r; i++){
        cout << q[i];
    }
    cout << endl;
}
int main(){
    string choice = "y";
    while(choice == "y" ){
        dequeue();
        display();
        cout << "Do you want to continue? Y/N" ;
        cin >> choice;
    }
}