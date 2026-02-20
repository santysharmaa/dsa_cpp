#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

int SolutionlPalin(ListNode* A) {

    if (A == NULL || A->next == NULL)
        return 1;

    // Step 1: Find middle
    ListNode* slow = A;
    ListNode* fast = A;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Skip middle for odd length
    if (fast != NULL) {  
        slow = slow->next;
    }

    // Step 3: Reverse second half
    ListNode* prev = NULL;
    ListNode* curr = slow;

    while (curr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    // Step 4: Compare both halves
    ListNode* left = A;
    ListNode* right = prev;

    while (right) {
        if (left->val != right->val)
            return 0;
        left = left->next;
        right = right->next;
    }

    return 1;
}

int main() {
    return 0;
}
