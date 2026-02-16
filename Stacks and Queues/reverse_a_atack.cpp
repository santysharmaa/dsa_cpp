#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int>& st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();
    insert_at_bottom(st, x);
    st.push(temp);
}

void reverse_stack(stack<int>& st){

    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverse_stack(st);
    insert_at_bottom(st, temp);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse_stack(st);


    

     while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}