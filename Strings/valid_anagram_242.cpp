#include <bits/stdc++.h>
using namespace std;

bool Brute_force_isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t) return true;

    return false;
}

bool isAnagram(string s, string t){

    if(s.length() != t.length())  return false;

    vector<int>frequency(26, 0);
    for(int i {0}; i<s.length(); i++) frequency[s[i] - 'a'] ++;
    for(int i {0}; i<s.length(); i++) frequency[t[i] - 'a'] --;

    for(int i {0}; i<frequency.size(); i++){
        if(frequency[i] != 0) return false;
    }
    return true;
}



int main(){
    string s = "anagram";
    string t = "nagaram";
    
    cout<<(isAnagram(s, t) ? "True" : "False");
    return 0;
}