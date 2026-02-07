#include <bits/stdc++.h>
using namespace std;

int no_of_occurence(vector<int>& arr, int target){
    int start = 0;
    int end  = arr.size() - 1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if (arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return start;
}

int main(){
    vector<int> arr = {1,3 ,5 ,6 };
    int target = 5;

    cout<<no_of_occurence(arr, target);
    return 0;
}