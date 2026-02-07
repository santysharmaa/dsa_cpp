//Q 2134

#include <bits/stdc++.h>
using namespace std;


int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int window_size = 0;
        for (int i {0}; i<n; i++){
            if(nums[i] == 1) window_size++;
        }
        int maxoneswindow = 0;
        for(int i{0}; i<window_size; i++){
            if(nums[i] == 1){
                maxoneswindow++;
            }
        }
        int start = 0;
        int end = window_size;
        int max_count = maxoneswindow;
        while(start < n){
            if(nums[start] == 1){
                maxoneswindow--;
            }
            if(nums[end % n] == 1 ){
                maxoneswindow++;
            }
            max_count = max(max_count, maxoneswindow);
            start++;
            end ++;
        }
    return window_size - max_count;
}


int main(){
    vector<int> arr = {1, 1, 0, 0, 1};

    int p = minSwaps(arr);
    cout<<p;


    // int n = 5;
    // for(int i {0}; i<n; i++){
    //     if(arr[i] == 1){
    //         totalOnes++;
    //     }
    // }

    // if((totalOnes == 0) || (totalOnes == n)) return 0;
    // int max_ones_window = 0;
    // for(int i {0}; i<totalOnes; i++){
    //     if(arr[i] == 1){
    //         max_ones_window++;
    //     }
    // }

    // int start = 0;
    // int i = totalOnes;
    // int max_ones = max_ones_window;

    // while(start < n){
    //     if(arr[start]  = 1){
    //         start--;
    //     }
    //     if(arr[i] == 1){
    //         i++;
    //     }
    //     max_ones = max(max_ones, max_ones_window);
    //     start++;
    //     i= (i+1)%n;      //for circular iteration;
    // }
    // cout<<max_ones;
    
    return 0;

}