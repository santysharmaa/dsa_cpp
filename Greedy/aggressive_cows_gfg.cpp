#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool canCowsbePlaced(vector<int> &stalls,int mid, int k){
        int lastPos = stalls[0];
        int cowPlaced = 0;
        for(int i = 1 ; i < stalls.size() ; i++){
            if((stalls[i] - lastPos) >= mid){
                cowPlaced++;
                lastPos = stalls[i];
                if(cowPlaced == k) return true;
            }
        }
        return false;
        
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int l = 1;
        int r = stalls[stalls.size() - 1] - stalls[0];
        int ans;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(canCowsbePlaced(stalls, mid, k)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return ans;
        
    }
};


int main(){
    vector<int> arr = {0, 3,4, 7 , 9, 10};
    int k = 4;

    Solution ss;
    cout<<ss.aggressiveCows(arr, k);
    return 0;
}