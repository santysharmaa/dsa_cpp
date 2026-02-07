#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i {0}; i<prices.size(); i++){
            if(prices[i]< minPrice){
                minPrice = prices[i];
            }
            else{
                maxProfit = max (maxProfit, prices[i]- minPrice);
            }
            
        }
        return maxProfit;
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

    Solution ss;
    int a = ss.maxProfit(x);
    cout<<a;

    return 0;
}
