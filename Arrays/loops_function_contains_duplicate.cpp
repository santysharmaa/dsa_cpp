#include <bits/stdc++.h>
using namespace std;




class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int v : nums){
            if(s.count(v)){
                return true;
            }
            s.insert(v);
        }
        return false;
    }
};

int main(){
    int n;
    cin>>n;

    vector<int> x;
    for(int i {0}; i<n; i++){
        int val;
        cin>>val;
        x.push_back(val);
    }

    Solution ss;
    cout<<(ss.containsDuplicate(x) ? "True" : "False");
}

