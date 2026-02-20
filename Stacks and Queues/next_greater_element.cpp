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

// vector<int> nextLargerElement(vector<int>& arr) {

//     vector<int> ans(arr.size(), -1);
//     stack<int> st;
//     for(int i = 0; i < arr.size(); i++){
//         while(!st.empty() && arr[st.top()] < arr[i]){
//             ans[st.top()] = arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }
//     return ans;
// }



// vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//     vector<int> y;
//     for(int i {0}; i<nums1.size(); i++){
//         int x = i;
//         for(int j {0}; j<nums2.size(); j++){
//             if( (nums1[x] == nums2[j]) && nums2[j+1] > nums2[j] ){
//                 y.push_back(nums2[j+1]);
//             }
//             else{
//                 y.push_back(-1);
//             }
//             x++;
//         }
//     }
//     return y;
// }

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;

    for (int i = 0; i < nums1.size(); i++) {
        int val = nums1[i];
        int nextGreater = -1;
        bool found = false;

        for (int j = 0; j < nums2.size(); j++) {
            if (nums2[j] == val) {
                found = true;
            } 
            else if (found && nums2[j] > val) {
                nextGreater = nums2[j];
                break;
            }
        }

        ans.push_back(nextGreater);
    }

    return ans;
}


int main() {
    // vector<int> arr = {1,3,2,4};
    // vector<int>x = nextLargerElement(arr);

    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};

    vector<int> x  = nextGreaterElement(nums1 , nums2);

    for(int y : x) cout<<y<<" ";
    return 0;
}