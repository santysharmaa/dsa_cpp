//Leetcode Problem 875: Koko Eating Bananas

//Psuedo Code

#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxspeed(vector<int> arr){
        int max_speed = INT_MIN;
        for(int i {0}; i<arr.size(); i++){
            if(arr[i] > max_speed) max_speed = arr[i];
        }
        return max_speed;
    }
    int calculate_time(vector<int> piles, int speed){
        int time = 0;
        for(int i {0}; i<piles.size(); i++){
            time += ceil((double)piles[i]/(double)speed);
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = maxspeed(piles);
        int ans = 0;
        

        while(left <= right){
            int mid = left + (right - left) / 2;
            int time = calculate_time(piles, mid);
            
            if(time <= h) {
                ans = mid;
                right = mid - 1;
                left = mid + 1;
                }
            else left = mid + 1;
        }
        return ans;
    }
};

int main(){

vector<int> a = {3, 6, 7, 11};
int n = a.size();
int h = 8;

Solution ss;
cout<<ss.minEatingSpeed(a, h);
// int maxSpeed = INT_MIN;
// for(int i = 0; i < n; i++){
//     if(a[i] > maxSpeed) maxSpeed = a[i];
//     }
//     int calculateTime(vector<int> piles, int speed){
//     for(int i = 0; i < piles.size(); i++){
//         time += ceil(double(piles[i]) / double(speed));
//     }
// }
//     for(int speed = 1; speed <= maxSpeed; speed++){
//         int time = calculateTime(piles, speed);
//         if(time == h){
//             return speed;
//         }
//     }
}




