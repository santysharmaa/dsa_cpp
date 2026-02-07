#include <bits/stdc++.h>
using namespace std;

int findGrimoire(vector<int>& arr, int target) {
    // add your code here
   
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        int mid = left + (right-left) / 2;
        if(arr[mid] == target){
            return 1;
        } 
        else if(arr[mid] < target){
            left =  mid + 1;
        } 
        else{
            right = mid -1;
        } 
    }

    return 0;

}

int main() {
    vector<int> arr = {2, 5, 7, 8, 11, 12};
    int t = 8;

    cout<<findGrimoire(arr, t);
    
    return 0;
}