#include <bits/stdc++.h>
using namespace std;

int minSwap(vector<int>& arr, int k) {
        // code here
        //edge case;
        
        int n = arr.size();
        int windowSize = 0;
        for(int i{0}; i<n; i++){
            if(arr[i] <= k) windowSize++;
        }
        int bad = 0;
        //edgecase
        if(windowSize == 0  || windowSize == n) return 0;
        for(int i{0}; i<windowSize; i++){
            if(arr[i] > k) bad++;    
        }
        int start = 0;
        int end = windowSize;
        int ans = bad;
        while(end < n){
            if(arr[start] > k)  bad--;
            if(arr[end] > k) bad++;
            ans = min (ans, bad);
            start++;
            end++;
        }
    return ans;
        
}




int main(){
    vector<int> arr = {2, 1,5, 6 ,3};
    int k = 3;

    cout<<minSwap(arr, k);
    return 0;
}