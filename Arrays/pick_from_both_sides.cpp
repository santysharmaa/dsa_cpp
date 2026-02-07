#include <iostream>
using namespace std;

int main() {
    int arr[7] = {1, -2, 3, 4, -1, 8, 3};
    int n = 7;

    int maxSum = arr[0] + arr[1] + arr[2];
    int a = arr[0], b = arr[1], c = arr[2];

    for (int i = 1; i <= n - 3; i++) {
        int currSum = arr[i] + arr[i + 1] + arr[i + 2];

        if (currSum > maxSum) {
            maxSum = currSum;
            a = arr[i];
            b = arr[i + 1];
            c = arr[i + 2];
        }
    }

    cout << a << " " << b << " " << c << endl;
    cout << maxSum << endl;

    return 0;
}














// int Solution::solve(vector<int> &A, int B) {
// int maxSum = 0;
// int left_sum = 0;
// for(int i = 0; i < B; i++){
//     left_sum += A[i];
// }
// maxSum = left_sum;

// int right_sum = 0;
// for(int i = B-1, j = A.size()-1; i >= 0; i--, j--){
//     left_sum -= A[i];
//     right_sum += A[j];
//     maxSum = max(maxSum, left_sum + right_sum);
// }
// return maxSum;
// }

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int maxPickSum(vector<int>& A, int B) {
//     int N = A.size();

//     vector<int> leftSum(B + 1, 0);
//     vector<int> rightSum(B + 1, 0);

//     // Left prefix sums
//     for (int i = 1; i <= B; i++) {
//         leftSum[i] = leftSum[i - 1] + A[i - 1];
//     }

//     // Right suffix sums
//     for (int i = 1; i <= B; i++) {
//         rightSum[i] = rightSum[i - 1] + A[N - i];
//     }

//     int ans = INT_MIN;

//     // Try all combinations
//     for (int k = 0; k <= B; k++) {
//         ans = max(ans, leftSum[k] + rightSum[B - k]);
//     }

//     return ans;
// }

// int main() {
//     vector<int> A = {5, -2, 3, 1, 2};
//     int B = 3;

//     cout << maxPickSum(A, B);
//     return 0;
// }


// //time complexities