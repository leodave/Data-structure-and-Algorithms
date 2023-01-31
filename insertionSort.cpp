#include <iostream>
using namespace std;

void insertionSort(int numbers[], int sizeOfArray){
    for(int i = 1; i <= (sizeOfArray-1); i++){
        for(int j = i; i >=1; j--){
            if(numbers[j-1] > numbers[j]){
                int temp = numbers[j];
                numbers[j] = numbers[j-1];
                numbers[j-1] = temp;
            }else{
                 break;
            }
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
    insertionSort(numeros,size);
}