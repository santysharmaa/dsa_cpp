#include <bits/stdc++.h>
using namespace std;


// int findSmallest(vector<int>& arr) { 
//     // add your code here 
//     int x = arr[0];
//     for(int i {0}; i<arr.size(); i++){
//         if(arr[i] < x){
//             x = arr[i];
//         }
//     }
//     return x;
// }
int findSmallest(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // minimum is in right half
        if (arr[mid] > arr[right]) {
            left = mid + 1;
        }
        // minimum is in left half (including mid)
        else {
            right = mid;
        }
    }
    return arr[left];   // index of smallest element
}





int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    cout<<findSmallest(arr);
    return 0;
}