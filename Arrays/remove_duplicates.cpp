#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int>& nums) {


        int k = 1; 
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; 
                k++;
            }
        }

        return nums;
    }

int main(){
    vector<int> x ={1, 2, 1};
    vector<int>y = removeDuplicates(x);
    for(int v: y){
        cout<<v<<" " ;
    }
    // cout<<removeDuplicates(x);
    return 0;
}