#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t){
    int i = 0;
    int m = 0;
    

    while(i < s.length() && m < t.length()){
        if(s[i] == t[m]) {
            i++;
        }
        else m++;
    }
    if(i == s.length()) return true;

    return false;
}

int main(){
    string s = {"a,a,a,a,a,a"};
    string t = {"b,b,a,a,a,a"};

    cout<<(isSubsequence(s,t) ? "True" : "False" );
    return 0;
}