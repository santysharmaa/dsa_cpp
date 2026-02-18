#include <bits/stdc++.h>
using namespace std;

//brute force
// vector<int> nextLargerElement(vector<int>& arr) {

//     vector<int>x(arr.size() , -1);
//     for(int i {0}; i<arr.size(); i++){
//         for(int j{i+1}; j<arr.size(); j++){
//             if(arr[j] > arr[i]){
//                 x[i] = arr[j];
//                 break;
//             }
//         }
//     }
//     return x;
// }


//optimal

vector<int> nextLargerElement(vector<int>& arr) {

    vector<int> ans(arr.size(), -1);
    stack<int> st;
    for(int i = 0; i < arr.size(); i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}



int main() {
    vector<int> arr = {1,3,2,4};
    vector<int>x = nextLargerElement(arr);

    for(int y : x) cout<<y<<" ";
    return 0;
}