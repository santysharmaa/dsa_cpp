#include <bits/stdc++.h>
using namespace std;

bool isPlaindrome(string s){
    int left = 0;
    int right = s.size() - 1;

    while(left <= right){
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        if( tolower(s[left]) != tolower(s[right]) )  return false;

        left++;
        right--;
    }
    return true;

}

int main(){
    string s = {"OPO"};

    cout<<(isPlaindrome(s) ? "True" : "False");
    return 0;
}