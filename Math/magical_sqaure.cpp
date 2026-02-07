#include <bits/stdc++.h>
using namespace std;

bool perfect_square(long long n){
    long long x = sqrt(n);
    return x * x == n;
}

long long countPerfectSquaresInRange(long long L, long long R) {
    // add your code here
    int count = 0;

    while(L<= R){
        if(perfect_square(L)) {
            count++;
        }

        L++;
    }
    return count;
}


long long countPerfectSquaresInRange(long long L, long long R) {
    if (L > R) return 0;

    long long left = ceil(sqrt(L));
    long long right = floor(sqrt(R));

    if (left > right) return 0;
    return right - left + 1;
}


int main() {
    long long l = 9;
    long long r = 25;
    cout<<countPerfectSquaresInRange(l, r);
    return 0;
}