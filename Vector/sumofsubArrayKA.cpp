// Kadane's Algorithm
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = INT_MIN;
    int currentSum = 0;
    
    for(int i = 0; i < size; i++){
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
            if(currentSum < 0){
                currentSum = 0;
            }
        }
    return 0;
}