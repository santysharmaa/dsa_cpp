#include <bits/stdc++.h>
using namespace std;

int findCeil(vector<int>& arr, int x){
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int index = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] <= x) left = mid + 1;
        else if(arr[mid] >= x){
            index = mid;
            right = mid - 1;
        }
    }
    return index;
}

int main(){
    vector<int>  x ={1, 2, 8, 10, 11, 12, 19};
    int t = 5;
    
    cout<<findCeil(x, t);

    return 0;
}