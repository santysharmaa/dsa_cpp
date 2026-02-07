#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int>& x){
    int n = x.size();
    int formula = n * (n + 1)/2;
    int ms = 0;

    for(int v : x){
        ms = ms + v;
    }
    return formula - ms;
}

int main(){
    vector<int> x = {3, 0, 1};

    int y = missing_number(x);
   cout<<y;
    return 0;
}