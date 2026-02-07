#include <bits/stdc++.h>
using namespace std;

// string reverseWords(string s) {
    // vector<char> x;

    // for(char& c : s) x.push_back(c);

    // for(int i{s.size()}; i>=0; i--){
    //     return string(1,x[i]);
    // }

    // reverse(s.begin(), s.end());

    // return s;


    //reverse the word of each i
    // int start = 0;

    // for (int i = 0; i <= s.size(); i++) {
    //     if (i == s.size() || s[i] == ' ') {
    //         reverse(s.begin() + start, s.begin() + i);
    //         start = i + 1;
    //     }
    // }
    // return s;



//optimal
    // stringstream ss(s);
    // string word, result;

    // while (ss >> word) {
    //     result = word + " " + result;
    // }

    // if (!result.empty())
    //     result.pop_back(); 

    // return result;


    //brute force
    // string result = "";
    // int i = s.size() - 1;

    // while (i >= 0) {
    //     // Skip spaces
    //     while (i >= 0 && s[i] == ' ') i--;

    //     if (i < 0) break;

    //     //  Capture a word
    //     string word = "";
    //     while (i >= 0 && s[i] != ' ') {
    //         word = s[i] + word; // build word in correct order
    //         i--;
    //     }

    //     //  Append word to result
    //     if (!result.empty())
    //         result += " ";
    //     result += word;
    // }

    // return result;




// }

string reverseWords(string s) {
        int i  = s.length() - 1;
        string ans = "";

        while( i >= 0){
            while(i >=0 && s[i] == ' ') i--;
            if( i < 0) break;

            int j = i;
            while(j >= 0 && s[j] != ' ' ) j--;

            if(ans.empty()) ans += s.substr( j+1 , i-j);
            else ans += ' ' + s.substr(j+1, i-j);

            i = j - 1;
        } 
        return ans;          
    }

int main(){
    string s = "the sky is blue";
    vector<char> x;
    for(char c : s) x.push_back(c) ;

    for(int i {s.size() - 1}; i>=0; i++){
        cout<<x[i];
    }
    // cout<<reverseWords(s);
    return 0;
}