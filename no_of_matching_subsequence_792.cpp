// Q792

#include <bits/stdc++.h>
using namespace std;

// int numMatchingSubseq(string s, vector<string>& arr) {
//     sort(s.begin(), s.end());

//     for(int i {0}; i<arr.size(); i++){
//         sort(arr[i].begin(), arr[i].end());
//     }
//     int count = 0;
        
//     for(int i {0}; i<arr.size(); i++){
//         if(arr[i] == s){
//             count++;
//         }
//     }
//     return count;
// }

bool isSubsequence(string s, string w) {
    int i = 0, j = 0;

    while (i < s.size() && j < w.size()) {
        if (s[i] == w[j]) {
            j++;   // matched character in word
        }
        i++;       // always move in s
    }
    return j == w.size();
}

int numMatchingSubseq(string s, vector<string>& words) {
    int count = 0;
    for (auto &w : words) {
        if (isSubsequence(s, w)) {
            count++;
        }
    }
    return count;
}


int main(){
    vector<string> arr = {"a","bb","acd","ace"};
    string s = "abcde";

    cout<<numMatchingSubseq(s,arr);
    return 0;
}