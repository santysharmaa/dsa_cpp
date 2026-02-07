#include <bits/stdc++.h>
using namespace std;

bool trg (vector<int> arr, int t ){
    
    unordered_set<int> hashTable;
    for(int i{0}; i<arr.size(); i++){
        int temp = t - arr[i];
        if(hashTable.find(temp) != hashTable.end()){
            return true;
        }
        else{
            hashTable.insert(arr[i]);
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1, 3, 4, 2, 8};
    int t = 17;
    cout<<(trg(arr, t) ? "True" : "False");
    return 0;
}