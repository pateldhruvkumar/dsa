// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
using namespace std;

int swapMaxMin(int arr[], int size){
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    int minimumIndex;
    int maximumIndex;
    
    for(int i=0; i<size; i++){
        if (arr[i] < minimum){
            minimum = arr[i];
            minimumIndex = i;
        }
        
        if (arr[i]> maximum){
            maximum = arr[i];
            maximumIndex = i;
        }
    }
    swap(arr[minimumIndex], arr[maximumIndex]);
    return 0;
}

int main() {
    // Write C++ code here
    int arr[6] = {2,4,3,7,8,9};
    int size = 6;
    
    swapMaxMin(arr, size);
    
    for(int i=0; i<size; i++){
        cout<< arr[i]<<endl;
    }
    return 0;
}