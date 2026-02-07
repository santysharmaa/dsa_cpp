// Implement pow(x, n) % d.
// In other words, given x, n and d,
// Find (xn % d)
// Note that remainders on division cannot be negative. In other words, make sure the answer you return is non-negative integer.


// Problem Constraints
// -109 <= x <= 109
// 0 <= n <= 109
// 1 <= d <= 109


// Example Input
// Input 1:
// x = 2
// n = 3
// d = 3
// Input 2:
// x = 5
// n = 2
// d = 6


// Example Output
// Output 1:
// 2
// Output 2:
// 1


// Example Explanation
// Explanation 1:
// 23 % 3 = 8 % 3 = 2.
// Explanation 2:
// 52 % 6 = 25 % 6 = 1.

#include <iostream>
using namespace std;


int sol(int x, int n, int d) {
    

    long long base = x % d;
    if (base < 0) base += d;  

    long long  result = 1;

    while (n > 0) {
        if (n & 1) {
            result = (result * base) % d;
        }
        base = (base * base) % d;
        n >>= 1;
    }

    return (int)(result % d);
}


int main(){
    int x = 5;
    int y = 2;
    int z = 6;

    cout<<sol(x, y, z);
    return 0;
}