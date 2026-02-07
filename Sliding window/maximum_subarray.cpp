#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3 ,4 , 5 ,6};
    int n = 6;

    int curr_sum = 0;
    int max_sum = arr[0];

    for(int i {1}; i<n; i++){
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    cout<<max_sum;
    return 0;
}