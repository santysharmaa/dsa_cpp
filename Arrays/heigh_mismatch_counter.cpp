#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int>& nums) { 
    // add your code here
    vector<int> arr = nums;

    sort(arr.begin(), arr.end());
    int count = 0;
    for(int i {0}; i<nums.size(); i++){
        if(nums[i] != arr[i]) count++;
    }
    return count;
}

int main() {
    vector<int> arr = {6,1,1,4,2,1,3};
    cout<<solve(arr);
    return 0;
}