#include <bits/stdc++.h>
using namespace std;

string add_strings(string num1, string  num2){

    int i = num1.size() - 1, j = num2.size() - 1;
    int carry = 0;

    string ans = "";
    while (i >= 0 || j>=0 || carry) {
        int sum = carry;

        if(i>=0){
            sum += num1[i] - '0';
            i--;
        }
        if(j>=0){
            sum += num2[j] - '0';
            j--;
        }

        ans = char(sum % 10  + '0') + ans;
        carry = sum/10; 
    }
    return ans;


}

int main(){
    string num1 = "11";
    string num2 = "123";

    cout<<add_strings(num1, num2);



    // int i = num1.size(), j = num2.size();

    // cout<<num1[b-1]<<" "<<num2[d-1];
    return 0;
}