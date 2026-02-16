#include <bits/stdc++.h>
using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class Stack {
// private:
//     Node* top;

// public:
//     Stack() {
//         top = NULL;
//     }

//     void pushTop(int x) {
//         Node* newNode = new Node();
//         newNode->data = x;
//         newNode->next = top;
//         top = newNode;
//     }
    // void pushBottom(int x) {
    //     Node* newNode = new Node();
    //     newNode->data = x;
    //     newNode->next = NULL;

    //     if (top == NULL) {
    //         top = newNode;
    //         return;
    //     }

    //     Node* temp = top;
    //     while (temp->next != NULL) {
    //         temp = temp->next;
    //     }
    //     temp->next = newNode;
    // }
//     void traverse() {
//         if (top == NULL) {
//             return;
//         }

//         Node* temp = top;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };





// int main() {
//     Stack s;

//     s.pushTop(10);
//     s.pushTop(20);
//     s.pushTop(30);

//     cout << "After pushing at top: ";
//     s.traverse();

//     s.pushBottom(5);
//     s.pushBottom(1);

//     cout << "After pushing at bottom: ";
//     s.traverse();

//     return 0;
// }





class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        if (st.empty()) {
            st.push(x);
            return st;
        }

        int temp = st.top();
        st.pop();

        st = insertAtBottom(st, x);

        st.push(temp);
        return st;
    }
};

int main() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    Solution obj;
    st = obj.insertAtBottom(st, 0);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
