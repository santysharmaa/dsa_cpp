#include <bits/stdc++.h>
using namespace std;


bool ispalindrome(string s, int l, int r){
    while(l < r){
        if (s[l] == s[r]) {
        l++;
        r--;
        }
    else return false;
}
    return true;
}

bool validPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while(left <= right){
        if(s[left] == s[right]){
            left ++;
            right--;
        }
        else{
            return (ispalindrome(s, left+1, right)  || ispalindrome(s, left, right-1)); 
        }
    }
    return true;
}


int main(){
    string s = {"cbbcc"};

    cout<<(validPalindrome(s) ? "True" : "False");
    return 0;
}