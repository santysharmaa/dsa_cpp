#include <bits/stdc++.h>
using namespace std;

ListNode* reverseList(ListNode* head) {
    ListNode* curr = head;
    ListNode* prev = nullptr;
    ListNode* future = nullptr;

    while(curr != nullptr){
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;

    }
    return prev;
}

int main() {
    
    return 0;
}