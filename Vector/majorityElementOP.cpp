#include <iostream>
#include <vector>
using namespace std;

// Majority Element using Optimized Approach
int majorityElement(vector<int>& nums) {
    int n = nums.size();

    //sort the vector (0(nlogn))
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];

    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        } else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,2,1,1};
    int ans = majorityElement(nums);
    cout<<ans;
    return 0;
}  