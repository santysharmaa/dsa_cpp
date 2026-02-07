#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> shuffle(vector<int>& nums, int n){
        vector<int> x;
        for(int i {0}; i<nums.size(); i++){
            x.push_back(nums[i]);
            x.push_back(nums[i+n]);
        }
        return x;
    }
};

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    vector<int> x;
    cout<<"Enter integers: ";
    for(int i {0}; i<n; i++){
        int val;
        cin>>val;
        x.push_back(val);
    }

    int y;
    cout<<"Enter number from where to shuffle: ";
    cin>>y;

    Solution ss;
    vector<int> a = ss.shuffle(x, y);
    for(int i {0}; i< n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}