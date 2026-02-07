// Q792
#include <bits/stdc++.h>
using namespace std;

// int countDistinctArtifacts(vector<int>& arr) {
//     if (arr.size() == 0) return 0;

//     int count = 1;  // first element is always distinct
//     sort(arr.begin(), arr.end());
//     for (int i = 1; i < arr.size(); i++) {
//         if (arr[i] != arr[i - 1]) {
//             count++;
//         }
//     }
//     return count;
// }
// int countDistinctArtifacts(vector<int>& arr) {
//     if (arr.size() == 0) return 0;

//     int count = 1;

//     for (int i = 1; i < arr.size(); i++) {
//         if (arr[i] != arr[i - 1]) {
//             count++;
//         }
//     }
//     return count;
// }

// int __countDistinctArtifacts(vector<int>& arr) {
//     // add your code here
//     int count = 1;
//     int x = 0;
//     for(int i{1}; i<arr.size(); i++){
//         if(arr[x] != arr[i]){
//             count++;
//         }
//         else{
//             x++;
//             i++;
//         }
//     }
//     return count;
// }


void countDistinctArtifacts(vector<int>& ids) {
    // add your code here
    set<int> x;
    for(auto& x : ids){
        cout<<x<<" " ;
    }

    

    // return x.size();

}

int main() {
    vector<int> arr = {5,4,3,2,5,1};

    // cout<<(isArraySorted(arr) ? "True" : "False");

    countDistinctArtifacts(arr);
    return 0;
}
