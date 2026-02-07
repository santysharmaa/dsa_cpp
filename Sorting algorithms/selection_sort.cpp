#include <bits/stdc++.h>
using namespace std;

vector<int> Sc (vector<int>& x){
    
    for(int i {0}; i<x.size()-1; i++){
        int smallestIndex = i;
        for(int j{1}; j<x.size(); j++){
            if(x[j] < x[smallestIndex]){
                smallestIndex = j;
            }
            swap(x[smallestIndex], x[i]);
        }
    }
    return x;

}

int main(){
    // vector<int> x = {4, 1, 5, 2, 3};

    // for(int i {0}; i<x.size()-1; i++){
    //     int smallestIndex = i;
    //     for(int j{i+1}; j<x.size(); j++){
    //         if(x[j] < x[smallestIndex]){
    //             smallestIndex = j;
    //         }
    //         swap(x[smallestIndex], x[i]);
    //     }
    // }

    // for(int i {0}; i<x.size(); i++){
    //     cout<<x[i]<<" ";
    // }

    // vector<int>y = Sc(x);

    // for(int v : x){
    //     cout<<v<<" ";
    // }



    int n = 5;
    int arr[] = {4, 1, 5,  2, 3};
    
    for(int i {0}; i<n-1; i++){
        int smallest_Index = i;
        for(int j {i+1}; j<n; j++){
            if(arr[j] < arr[smallest_Index]){
                smallest_Index = j;
            }
        }
        swap(arr[smallest_Index], arr[i]);
    }
    for(int v : arr){
        cout<<v<<" ";
    }
    
    return 0;
}