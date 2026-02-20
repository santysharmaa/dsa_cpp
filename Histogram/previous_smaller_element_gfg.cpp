#include <bits/stdc++.h>
using namespace std;


vector<int> prevSmaller(vector<int>& arr) {
    vector<int>prev;
    prev.push_back(-1);
    int x = 0;
    
    for(int i {0}; i<arr.size()-1; i++){
        if(arr[x] < arr[i+1]){
            prev.push_back(arr[x]);
        }
        else prev.push_back(-1);
            
        x++;
    }
    return prev;
}

vector<int> prevSmaller(vector<int>& arr) {
    stack<int> st;
    vector<int> prev;
    
    for(int i = 0; i < arr.size(); i++) {
        
        while(!st.empty() && st.top() >= arr[i])
            st.pop();
        
        if(st.empty())
            prev.push_back(-1);
        else
            prev.push_back(st.top());
        
        st.push(arr[i]);
    }
    
    return prev;
}

int main() {
    vector<int> arr = {1 , 6 ,2 };
    vector<int> x = prevSmaller(arr);

    for(int v : x) cout<<v<<" ";
    return 0;
}