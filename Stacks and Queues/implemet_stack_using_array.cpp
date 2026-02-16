#include <bits/stdc++.h>
using namespace std;

class myStack {
  private:
    int *arr;     // array to store stack elements
    int top;      // index of top element
    int size;     // maximum size of stack

  public:
    // Constructor
    myStack(int n) {
        size = n;
        arr = new int[size];
        top = -1;        // stack is empty initially
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if stack is full
    bool isFull() {
        return top == size - 1;
    }

    // Push element into stack
    void push(int x) {
        if (isFull()) {
            return;      // stack overflow
        }
        top++;
        arr[top] = x;
    }

    // Pop element from stack
    void pop() {
        if (isEmpty()) {
            return;      // stack underflow
        }
        top--;
    }

    // Return top element
    int peek() {
        if (isEmpty()) {
            return -1;   // indicates empty stack
        }
        return arr[top];
    }
};

int main() {
    myStack s(5);   // stack of size 5

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top after pop: " << s.peek() << endl;

    s.push(40);
    s.push(50);
    s.push(60);   // overflow case

    return 0;
}
