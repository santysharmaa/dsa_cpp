#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

ListNode* middleNode(ListNode* head) {
    vector<int> arr;

    ListNode* curr = head;
    while (curr != NULL) {
        arr.push_back(curr->val);
        curr = curr->next;
    }
    int v = arr.size() / 2;
    int x = arr[v];
    ListNode* m = new ListNode(x);
    m->next = head;
    return m;
}



int main() {
    int n = 5;

    ListNode* head = new ListNode(1);
    ListNode* curr = head;

    for (int i = 2; i <= n; i++) {
        curr->next = new ListNode(i);
        curr = curr->next;
    }

    ListNode* mid = middleNode(head);

    // while (mid != NULL) {
        cout << mid->val;
    //     mid = mid->next;
    // }

    return 0;
}

