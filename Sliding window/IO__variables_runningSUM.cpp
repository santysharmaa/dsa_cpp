#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:

    vector<int> Rsum( vector<int>& num){
        vector<int> x;
        int val = 0;
        for(int i {0}; i<num.size(); i++){
            val += num[i];
            x.push_back(val);
        }
        return x;
    }
};

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    vector<int> x;
    cout<<"enter integers";
    for(int i{0}; i<n; i++){
        int val;
        cin>>val;
        x.push_back(val);
    }

    Solution ss;
    vector<int> result = ss.Rsum(x);
    for(int v : result){
        cout<<v<<" ";
    }
    return 0;
}