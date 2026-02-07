#include <bits/stdc++.h>
using namespace std;

bool target(vector<int>& arr, int t, int l, int h) {


    if (l > h) return  false;

    while(l <= h){
        int mid = l + (h-l)/2;
        if(arr[mid]  == t) {
            return true;
        }

        else if(arr[mid] < t){
            l = mid + 1;
            return target(arr,t, l, h);
        } 
        else{
            h = mid-1;
            return target(arr, t, l, h);
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    int t = 5;
    int l = 0;
    int h = arr.size() - 1;

    cout << (target(arr, t, l, h) ? "True" : "False");
    return 0;
}
