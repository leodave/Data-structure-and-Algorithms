#include <iostream>
using namespace std;

int linearSearch(int numbers[],int sizeOfArray, int numberSearched){
    int index;
    for(int i = 0; i <= (sizeOfArray - 1); i++){
        if(numbers[i] == numberSearched){
            index = i;
        }
    }
    return index;
}
int main(){
    int numeros[] = {5,2,6,7,1,9};
    int size = sizeof(numeros)/sizeof(numeros[0]);
    cout << linearSearch(numeros,size,6);
}