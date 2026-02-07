#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>& arr, int k){
    int window_sum = 0;
    int n = arr.size();
    for(int i {0}; i<k; i++) window_sum += arr[i];

    int maxSum = window_sum;
    for(int i{k}; i<n; i++){
        window_sum += arr[i];
        window_sum -= arr[i-k]; 
        maxSum = max (maxSum, window_sum);
    }
    return maxSum;

}

int main(){
    vector<int> arr = {100, 200, 300, 400};
    int k  = 2;

    cout<<maxSubarray(arr, k);

    return 0;
}