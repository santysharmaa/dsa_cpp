#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
  private:
    Node* head;   
    int count;

  public:
    Stack() {
        head = NULL;
        count = 0;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
        count++;
    }

    
    void pop() {
        if (isEmpty()) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        count--;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return head->data;
    }


    int size() {
        return count;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top after pop: " << s.peek() << endl; 

    cout<<"Size: "<<s.size();

    return 0;
}
