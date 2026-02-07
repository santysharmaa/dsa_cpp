#include <bits/stdc++.h>
using namespace std;

string firstRepChar(string s) {
    unordered_set<char> seen;

    for (char c : s) {
        if (seen.count(c)) {
            return string(1, c); 
        }
        seen.insert(c);
    }
    return "-1";
}

string firstRepChar__(string s) {
    vector<char> v;

    for (char c : s) v.push_back(c);

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (v[i] == v[j]) {
                return string(1, v[i]);
            }
        }
    }
    return "-1";
}


int main(){
    string x = {"hellogeeks"}; 
    cout<<firstRepChar(x);
    return 0;
}