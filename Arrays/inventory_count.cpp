#include <bits/stdc++.h>
using namespace std;
int first_occurrences(vector<int>& arr, int target) { 
    // add your code here 
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target) {
            ans = mid;
            right = mid - 1;

        }
        else if(arr[mid] > target ) right = mid  - 1;
        else left = mid  + 1;
    }
    return ans;
}
int last_occurrences(vector<int>& arr, int target) { 
    // add your code here 
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target) {
            ans = mid;
            left = mid + 1;

        }
        else if(arr[mid] > target ) right = mid  - 1;
        else left = mid  + 1;
    }
    return ans;
}

int total_occurence(vector<int>& arr, int target){
    int last = last_occurrences(arr,target);
    int first = first_occurrences(arr,target);

    return last - first + 1;
}

int main() {
    vector<int> arr = {2,5,8,8,8,11,12};

    int target = 8;

    cout<<total_occurence(arr, target);
    return 0;
}