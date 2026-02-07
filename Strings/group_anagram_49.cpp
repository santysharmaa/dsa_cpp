#include <bits/stdc++.h>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) {
    for(string i {0}; i<strs.size(); i++){
        sort(i.begin(), i.end());
    }
    for(string i {0}; i<strs.size(); i++){
        if(strs[i] == strs[i+1]){
                
        }
    }
        
}


int main(){
    vector<string> strings = {"eat","tea","tan","ate","nat","bat"};
    vector<string> y = groupAnagrams(strings);

    for(string v : y) cout<<v<<" ";
    return 0;
}