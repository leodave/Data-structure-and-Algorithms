#include <iostream>
using namespace std;

void selectionSort(int numbers[], int sizeOfArray){
    for(int i = 0; i <= sizeOfArray - 2; i++){
        int tempIndex = i;
        for(int j = i + 1; j <= sizeOfArray - 1; j++){
            if(numbers[tempIndex] > numbers[j]){
                tempIndex = j;
            }
        }
        if(i != tempIndex){
            int temp = numbers[i];
            numbers[i] = numbers[tempIndex];
            numbers[tempIndex] = temp;
        }
    }

      for(int k = 0; k <= sizeOfArray - 1; k++){
        cout << numbers[k];
        cout << ",";
    }
}

int main(){
    int numeros[] = {6,3,5,9,2,4,1,8,7};
    int size = sizeof(numeros)/sizeof(numeros[0]);
    selectionSort(numeros,size);
}