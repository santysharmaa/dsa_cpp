#include <bits/stdc++.h>
using namespace std;


vector<int> moveZeros(vector<int> x){
    int left  = 0;

    for(int i {0}; i<x.size(); i++){
        if(x[i]!= 0){
            x[left] = x[i];
            left++;
        }
    }
    for(int i {left}; i<x.size(); i++){
        x[i] = 0;
    }
    return x;
}

int main(){
    vector<int> x = {0, 1, 0, 3, 12};

    vector<int>y = moveZeros(x);

    for(int v : y){
        cout<<v<< " ";
    }

    return 0;
}