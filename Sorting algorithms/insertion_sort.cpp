#include <bits/stdc++.h>
using namespace std;

vector<int> Is(vector<int> x){
    int n = x.size();

    for (int i = 1; i < n; i++) {
        int temp = x[i];      
        int prev = i - 1;

        while (prev >= 0 && x[prev] > temp) {
            x[prev + 1] = x[prev]; 
            prev--;
        }

        x[prev + 1] = temp;   
    }
    return x;   

}

int main(){
    
    // vector<int>x = {4, 1, 5, 2, 3};

    // vector<int>y  = Is(x); 

    int n = 5;
    int arr[] = {4, 1, 5 ,2, 3};

    for(int i {0}; i<n; i++){
        
    }

    for(int v : arr){
        cout<<v<<" ";
    }
    return 0;
}