#include <iostream>
using namespace std;

void bubbleSort(int numbers[], int sizeOfArray){
    for(int i = (sizeOfArray - 2); i >= 0; i--){
        for(int j = 0; j <= (sizeOfArray - 1); j++){
            if(numbers[j] > numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
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
    bubbleSort(numeros,size);
}