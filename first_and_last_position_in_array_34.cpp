#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int binary_search_left(vector<int> arr, int target){
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while(start  <=  end){
            int mid = start + (end - start ) / 2;
            if(arr[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(arr[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
    int binary_search_right(vector<int> arr, int target){
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while(start  <=  end){
            int mid = start + (end - start ) / 2;
            if(arr[mid] == target){
                ans = mid;
                start = mid + 1;
            }
            else if(arr[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {

        int start = binary_search_left(nums, target);
        int end = binary_search_right(nums, target);

        return {start , end};
    }
};

int main(){
    vector<int> arr = {5, 7, 7 , 8,  8, 10};
    int target = 8;
    Solution ss;


    vector<int> y = ss.searchRange(arr, target);

    for(int v : y){
        cout<<v<<" ";
    }
    return 0;
}