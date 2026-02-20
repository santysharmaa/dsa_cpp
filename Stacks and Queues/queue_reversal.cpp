#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q) {
    if(q.empty()) return;

    int temp = q.front();
    q.pop();
    reverseQueue(q);
    q.push(temp);
}

int main() {
    queue<int> q;

    // Adding elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Original Queue: ";

    // Print original queue (copy it because printing removes elements)
    queue<int> temp = q;
    while(!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << endl;

    // Reverse queue
    reverseQueue(q);

    cout << "Reversed Queue: ";

    // Print reversed queue
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}