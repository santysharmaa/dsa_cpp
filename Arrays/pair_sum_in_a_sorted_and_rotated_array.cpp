#include <bits/stdc++.h>
using namespace std;

 bool pairInSortedRotated(vector<int>& arr, int target) {
    int smallest = 0;
    int largest = 0;

    int n = arr.size();


    for(int i {0}; i<n-1; i++){
        if(arr[i]; arr[i+1]){
            largest = i;
            smallest = i+1;
            break;
        }
    }

    while() {
        if(arr[smallest] + arr[largest] ==target){
            return true;
        }
        else if((arr[smallest] + arr[largest]) == ){
                
        }
        else{
            largest = (largest - 1 + n) % 2;
        }
    }
        
 }

 int main(){

    return 0;
 }