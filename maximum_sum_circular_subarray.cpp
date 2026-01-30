#include <bits/stdc++.h>
using namespace std;


int kadence_max(vector<int> nums, int n){
    int max_sum = nums[0];
    int curr_sum = 0;

    for(int i{0}; i<n; i++){
        curr_sum = max(curr_sum + nums[i] , nums[i]);
        max_sum = max (curr_sum, max_sum);
    }
    return max_sum;
}
int kadence_min(vector<int> nums, int n){
    int min_sum = nums[0];
    int curr_sum = 0;

    for(int i{0}; i<n; i++){
        curr_sum = min(curr_sum + nums[i] , nums[i]);
        min_sum = min (curr_sum, min_sum);
    }
    return min_sum;
}

int main(){
    vector<int> nums = {-1, -2, -3, -4};
    int n = nums.size();
    int total_sum = 0;

    for(int v : nums){
        total_sum += v;
    }

    int min_sum = kadence_min(nums, n);
    int max_sum = kadence_max(nums, n);

    int circular_sum = total_sum - min_sum;

    cout<<total_sum<<endl;
    cout<<min_sum<<endl;
    cout<<max_sum<<endl;

    if(max_sum < 0 ){
        cout<<max_sum;
    }
    else{
        cout<< max( max_sum , circular_sum);
    }
    return 0;
}