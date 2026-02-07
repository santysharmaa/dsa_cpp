#include <bits/stdc++.h>
using namespace std;

int target(vector<int>& x, int tr){
    for(int i{0}; i<x.size(); i++){
        if(x[i] != tr){
            continue;
        }
        else{
            return i;
        }
    }
    return -1;
}


int main(){
    vector<int> x = {-1, 0, 3, 5, 9 , 12};
    int tar = 9;

    cout<<target(x , tar);
    return 0;
}