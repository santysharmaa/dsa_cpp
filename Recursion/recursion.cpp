// #include <bits/stdc++.h>
// using namespace std;

// // int recursion(vector<int>& n , int i ,int t){
// //     // if(i < 0) return  i;
    
// //     // if(n[i] == t){
// //     //     return i;
// //     // }
    
// //     recursion(n , i-1, t);


// // }

// int fibonaaci(int n){
//     if(n==0) return 0;

//     else if(n==1) return 1;

//     else{
//         return fibonaaci(n-1) + fibonaaci(n-2);
//     }
    
    
//     // return  fibonaaci(n-1);
//     cout<<fibonaaci(n);
// }
 
// int main(){
//     int n = 8;
//     cout<<fibonaaci(n);
//     return 0;



//     // vector<int> n  = {0, 1, 1, 2, 3, 5 ,8, 13};
//     // int index = n.size();
//     // int t = 8;
//     // cout<<recursion(n, index, t);
    
// }



#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}