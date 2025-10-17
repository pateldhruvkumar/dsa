#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& nums, int target){
    for(int val:nums){
        if(val == target){
            cout<< "Found at index "<<index<<endl;
        }
    }
    return 0;
}

int main(){
    vector<int> nums = {1,2,7,4,5};
    int target = 3;
    linearSearch(nums, target);
}