#include <bits/stdc++.h>
using namespace std;

bool search(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while(left <= right){
        int mid = left + (right - 1) / 2;
        if(arr[mid] == target ) return true;

        else if(arr[mid] < target){
            
        }
    }
    return false;

}

int main(){
    vector<int> arr = {2,5,6,0,0,1,2};
    int target = 0;

    cout<<(search(arr , target) ? "True" :  "False");
   return 0;
}