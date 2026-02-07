#include <bits/stdc++.h>
using namespace std;


int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        
    int n = arr.size();
    int sum = 0;
    
    
    for(int i {0}; i<k; i++){
        sum += arr[i];
    }
    int maxsum = sum;
    int start = 0;
    int i = k;
    while(k < n){
        sum -= arr[start];
        sum += arr[i];
        maxsum = max (maxsum, sum);
        start++;
        i++;
    }
    return maxsum;
}


int main() {
    // vector<int> arr = {100, 200, 300, 400, 150};
    int arr[]= {1, 1,0, 0,1};
    int n = 5;
    int x = 0;
    for(int i{0}; i<n; i++){
        if(arr[i] == 1){
            arr[x] = arr[i];
        }
        x++;
    }
    for(int v : arr){
        cout<<v<<" ";
    }

    // int k = 4;
    // int y = maxSubarraySum(arr, k);
    // cout<<y;
    return 0;
}




