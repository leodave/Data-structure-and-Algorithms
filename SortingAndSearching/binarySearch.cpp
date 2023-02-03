#include <iostream>
using namespace std;

int binarySearch(int numbers[], int sizeOfArray, int numberToSearch){
    int top= sizeOfArray - 1;;
    int bottom = 0;
    int middle;
    int foundNumber = 0;
    int index;
    do {
        middle = (bottom + top)/2;
        if(numberToSearch == numbers[middle]){
            foundNumber = 1;
        }else{
            if(numberToSearch < numbers[middle]){
                top = middle;
            }else {
                bottom = middle;
            }
        }
    }
    while(foundNumber == 0 && bottom <= top);
    if(foundNumber == 1){
        index = middle;
    }
    return index;
}

int main(){
    int numeros[] = {1,2,3,4,5,6};
    int size = sizeof(numeros)/sizeof(numeros[0]);
    cout << binarySearch(numeros,size,5);
}