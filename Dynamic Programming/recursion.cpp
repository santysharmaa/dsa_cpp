#include <bits/stdc++.h>
using namespace std;

int recursion(vector<int>& n , int i){
    if(i == n.size()-1) return 1;
    

    cout<<n[i]<<" ";
    recursion(n , i+1);


}
 
int main(){
    vector<int> n  = {5, 4, 9, 3, 2, 1};
    int index = 0;
    cout<<recursion(n, index);
    return 0;
}