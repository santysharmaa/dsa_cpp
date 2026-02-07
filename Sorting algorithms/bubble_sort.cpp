#include <bits/stdc++.h>
using namespace std;

vector<int> Bs (vector<int>& x){
    int n = x.size();
    for(int i {0}; i<n-1; i++){
        for (int j {0}; j<n-i-1; j++){
            if(x[j] > x[j+1]){
                swap(x[j], x[j+1]);
            }
        }
    }
    return x;
   

}

int main() {

    // vector<int>x = {4 , 1, 5, 2, 3};

    int n = 5;
    int arr[5] = {5, 6, 3, 7, 2};

    // for(int i {0}; i<n-1; i++){
    //     for(int j {0}; j<n-i-1; j++){
    //         if(arr[j] > arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }
    
    for(int v : arr){
        cout<<v<<" ";
    }
    
    


    // vector<int> y = Bs(x);
    // for(int v : y){
    //    cout<<v<< " ";
    // }
    return 0;
}