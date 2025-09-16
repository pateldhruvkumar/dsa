// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
using namespace std;

int uniqueValues(int arr[], int size, int arr2[], int size2){
  
    for(int i=0; i<size; i++){
        for(int j=0 ;j<size2; j++){
            if (arr[i] == arr2[j]){
                cout<< arr[i]<<endl;
            }
        }
    }
    return 0;
}

int main() {
    // Write C++ code here
    int arr[6] = {2,4,4,7,8,9};
    int arr2[6] = {2,3,6,7,1,9};

    int size = sizeof(arr)/ sizeof(arr[0]);
    int size2 = sizeof(arr2)/ sizeof(arr[0]);
    uniqueValues(arr, size, arr2, size2);
    
    return 0;
}