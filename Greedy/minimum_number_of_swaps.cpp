// Q 2134

#include <bits/stdc++.h>
using namespace std;


    int minSwaps(vector<int>& nums) {
        int window_size = 0;
        int n = nums.size();
        for(int i {0}; i<n; i++) {
            if(nums[i] == 1){
                window_size++;
            }
        }
        int max_ones = 0;
        for(int i{0}; i<window_size; i++){
            if(nums[i] == 1){
                max_ones++;
            }
        }
        int start = 0;
        int end = window_size;
        int i = max_ones;
        while (window_size < n){
            if(nums[start] == 1) i--;
            if(nums[end] == 1)  i++;
            max_ones = max(max_ones, i);
            start--;
            end = (end+1)%n;
        }
        return max_ones;
    }

int main(){
    vector<int> arr = {0, 1, 0, 1, 1, 0, 0};

    cout<<minSwaps(arr);


}