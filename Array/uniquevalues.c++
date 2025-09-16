// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
using namespace std;

int uniqueArr[6]

int uniqueValues(int arr[], int size){
  
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if (arr[i] == arr[j]){
                arr[j] = -1;
                arr[i] = -1;
            }
            else{
                uniqueArr[i] = arr[i];
            }
        }
    }
    return 0;
}

int main() {
    // Write C++ code here
    int arr[6] = {2,4,4,7,8,9};
    int size = 6;
    
    uniqueValues(arr, size);
    
    for(int i=0; i<size; i++){
        cout<< arr[i]<<endl;
    }
    return 0;
}