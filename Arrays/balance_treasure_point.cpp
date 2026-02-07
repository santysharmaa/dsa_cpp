#include <bits/stdc++.h>
using namespace std;

int balancedTreasurePoint(vector<int>& arr) {
    int totalSum = 0;
    for (int x : arr) totalSum += x;

    int leftSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        // totalSum -= arr[i];   // right sum

        if (leftSum == totalSum) return i;

        totalSum -= arr[i];

        leftSum += arr[i];
    }
    return -1;
}


int main() {
    vector<int> arr = {6,1,7,3,6,5,6};

    cout<<balancedTreasurePoint(arr);
    return 0;
}