#include <bits/stdc++.h>
using namespace std;




int get_partition(vector<int>& arr, int low, int high){
        int pivot = arr[high];

        int i = low - 1;

        for(int j {low}; j<high; j++){
            if(arr[j] < pivot){
                i++;
                swap(arr[i], arr[j]);
            }
            
        }

        swap(arr[i + 1], arr[high]);
        return i + 1;

    }

    void quick_sort(vector<int>& arr, int low ,  int high){

        if(low < high){
            int partition = get_partition(arr, low, high);

            quick_sort(arr, low, partition - 1);
            quick_sort(arr, partition + 1, high);
        }

    }
    vector<int> sortArray(vector<int>& arr) {

        quick_sort(arr, 0, arr.size()-1);

        return arr;
        
    }


int main(){
    vector<int> arr = {4,6,2,5,7,9,1,3,};
    
    vector<int> y = sortArray(arr);
    for(int v : arr){
        cout<<v<<" ";
    }
    


    return 0;
}