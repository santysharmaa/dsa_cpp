#include <bits/stdc++.h>
using namespace std;


void deleteMid_until(stack<int>& s, int k) {
    if (k == 1) {
        s.pop();   
        return;
    }

    int temp = s.top();
    s.pop();

    deleteMid_until(s, k - 1);

    s.push(temp);
}


void delete_mid(stack<int>& st){
    int n = st.size();

    deleteMid_until(st, (n/2)+1);
}


int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    delete_mid(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}