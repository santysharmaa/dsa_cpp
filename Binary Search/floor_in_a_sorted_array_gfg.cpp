
#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int x) {
        // code here
        int start = 0;
        int end = arr.size() - 1;
        int index = -1;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] > x) {
                end = mid - 1;
            }
            else if(arr[mid] <= x){
                index = mid;
                start = mid + 1;
            }
        }
        return index;
    }


    int main(){
        vector<int> arr = {1,2, 3,5,7,7,7,9};
        int x = 7;
        cout<<findFloor(arr, x);
        return 0;
    }