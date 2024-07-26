/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm> 

using namespace std;

const int max_size = 1000; 

void Function(int *numbers, int size) {
    for(int i = 0; i < size; i++) {
        cin >> numbers[i]; 
    }
}

void bubbleSort(int *array, int size) {
    int count = 0; 
    for(int i = 1; i < size; i++) {
        for(int j = 1; j <= size - i; j++) { 
            if(array[j - 1] > array[j]) {
                swap(array[j - 1], array[j]);
                count++;
            }
        }
    }
    cout << count;
}

int main() {
    
    int Array[max_size], size; 
    cin >> size;
    Function(Array, size);
    bubbleSort(Array, size);
    
    return 0;
}
