#include <bits/stdc++.h>
using namespace std;

class MyStack {
    queue<int> q;

public:
    MyStack() {
        // constructor (nothing special needed)
    }
    
    // Push element x onto stack
    void push(int x) {
        int n = q.size();
        q.push(x);

        // rotate previous elements
        for (int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    // Removes the element on top of the stack and returns it
    int pop() {
        if (q.empty()) return -1;
        int val = q.front();
        q.pop();
        return val;
    }
    
    // Get the top element
    int top() {
        if (q.empty()) return -1;
        return q.front();
    }
    
    // Returns whether the stack is empty
    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack* obj = new MyStack();

    obj->push(10);
    obj->push(20);
    obj->push(30);

    cout << obj->top() << endl;   // 30
    cout << obj->pop() << endl;   // 30
    cout << obj->top() << endl;   // 20
    cout << obj->empty() << endl; // 0 (false)

    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// class Stack {
//     queue<int> q;

// public:
//     void push(int x) {
//         int n = q.size();
//         q.push(x);

//         // rotate previous elements
//         for (int i = 0; i < n; i++) {
//             q.push(q.front());
//             q.pop();
//         }
//     }

//     void pop() {
//         if (q.empty()) {
//             cout << "Stack is empty\n";
//             return;
//         }
//         q.pop();
//     }

//     int top() {
//         if (q.empty()) {
//             cout << "Stack is empty\n";
//             return -1;
//         }
//         return q.front();
//     }

//     bool empty() {
//         return q.empty();
//     }
// };

// int main() {
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout << st.top() << endl; // 30
//     st.pop();
//     cout << st.top() << endl; // 20
// }
