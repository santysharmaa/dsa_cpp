//Q 75

#include <bits/stdc++.h>
using namespace std;

void sortColors (vector<int>& arr){
    int low = 0;
    int current = 0;
    int high = arr.size() - 1;

    while(current <= high){ 
        if(arr[current] == 0){
            swap(arr[low], arr[current]);
            low++;
            current++;
        }
        else if(arr[current] == 2){
            swap(arr[current], arr[high]);
            high--;
        }
        else{
            current++;
        }
    }

   
    for(int v: arr){
        cout<<v<<" ";
    }

}

int main(){
    vector<int> arr = {2, 0, 2,1, 1, 0};

    sortColors(arr);

    return 0;
}