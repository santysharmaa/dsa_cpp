#include<bits/stdc++.h>
using namespace std;


int firstUniqChar(string s) {
    for (int i = 0; i < s.size(); i++) {
        bool unique = true;

        for (int j = 0; j < s.size(); j++) {
            if (i != j && s[i] == s[j]) {
                unique = false;
                break;
            }
        }

        if (unique)
            return i;
    }
    return -1;
}

//optimal
int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        for(char c : s) freq[c - 'a']++;

        for(int i = 0; i < s.size(); i++){
            if(freq[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }



int main(){
    string x = {"leetcode"}; 
    cout<<firstUniqChar(x);
    return 0;
}