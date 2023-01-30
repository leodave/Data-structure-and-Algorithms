#include <iostream>
using namespace std;

void simpleSort(int numbers[], int sizeOfArray){
    for (int i = 0; i <= (sizeOfArray - 2); i++){
        for(int j=i+1; j <= (sizeOfArray -1); j++){
            
            if(numbers[i] > numbers[j]){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] =  temp;
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
    simpleSort(numeros,size);
}