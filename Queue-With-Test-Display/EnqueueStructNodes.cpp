#include <iostream>
using namespace std;

struct Node {
    string name;
    int age;
};
Node q[5];
int f,r = -1, n = 5;

void enqueue(){
    string name;
    int age;
    if(r == n-1){
        cout << "queue overflow";
    }else{
        if(f == -1){
            f= 0;
        };
        cout << "Insert Name" << endl;
        cin >> name;
        cout << "Insert Age" << endl;
        cin >> age;
        r++;
        q[r].name = name;
        q[r].age = age;

    }
}
void displayForward(){
    for( int i = f; i <=r; i++ ){
        cout << q[i].name << endl;
        cout << q[i].age << "|" << endl;
    }
    cout << endl;
}
void displayBackWard(){
    for(int j= r; j >= f; j--){
        cout << q[j].name << endl;
        cout << q[j].age << "|" << endl;
    }
    cout << endl;
}
int main(){
    string choice = "y";
    while(choice == "y"){
        enqueue();
        displayBackWard();
        cout << "do you want to continue? Y/N";
        cin >> choice;
    }
}