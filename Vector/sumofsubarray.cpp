// Brute Force Approach
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = 0; 
    
    for(int start = 0; start < size; start++){
        int currentSum = 0;
        
        for(int end = start; end < size; end++){
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
            }
        }
        cout<<"Maximum: "<<maxSum;
    return 0;
}