#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int k = 3;

    // int l = 0;
    // int r = n -1;

    // while(l <= r){
    //     int mid = l + (r-l)/2;
    // }
    
    // k = k % n;

        reverse(arr.begin(), arr.end());
        for(int i {0}; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        reverse(arr.begin(), arr.begin() + k);
        for(int i {0}; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        reverse(arr.begin() + k, arr.end());
        for(int i {0}; i<n; i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}