#include <bits/stdc++.h>
using namespace std;

vector<int> subarray (vector<int>& arr, int target){
    int n = arr.size();
    int sum = 0;

    for(int end {0}; end<n; end++){
        sum += arr[end];
        while(sum > target && sum < end){
            
        }
        if(sum == target) return {}
    }
}
