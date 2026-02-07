#include <bits/stdc++.h>
using namespace std;

bool search_matrix(vector<int>& matrix , int target){
    int n = matrix.size();
    int n = matrix[0].size();


    int row = 0;
    int col = m - 1;

    while(row < n && col > 0) {
        if(matrix[row] [col] == target) return true;
        else if(matrix[row] [col > target]) col--;
        else row++;
    }
    return false;

}

int main(){
    int  matrix[] = [[1,3,5,7],[10,11,16,20],[23,30,34,60]];
    int  target = 3;

    cout<<(search_matrix(matrix , target)?  "True" : "False");
    return 0;
}