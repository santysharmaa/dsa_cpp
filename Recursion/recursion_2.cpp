#include <bits/stdc++.h>
using namespace std;

bool target(vector<int>& arr, int t, int x) {

    if (x == arr.size()) {
        return false;
    }

    if (arr[x] == t) {
        return true;
    }

    return target(arr, t, x + 1);
}

int main() {
    vector<int> arr = {1, 5, 1, 9, 10};
    int t = 9;
    int x = 0;

    cout << (target(arr, t, x) ? "True" : "False");
    return 0;
}
