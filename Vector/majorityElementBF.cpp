#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    
    for(int val: nums){
        int freq = 0;
    
        for(int el: nums){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    int ans = majorityElement(nums);
    cout<<ans;
    return 0;
}