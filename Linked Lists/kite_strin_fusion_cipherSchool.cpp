#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
   ListNode* next;
   ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int k) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;

    int carry = 0;

    // Step 1: add two numbers normally (base 10)
    while (l1 || l2 || carry) {
        int sum = carry;

        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
    }

    // Step 2: apply k to each digit
    curr = dummy->next;
    while (curr) {
        curr->val = (curr->val * k) % 10;
        curr = curr->next;
    }

    return dummy->next;
}



int main() {
    // Create first linked list: 3 -> 4 -> 2
    ListNode* l1 = new ListNode(3);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(2);

    // Create second linked list: 4 -> 6 -> 5
    ListNode* l2 = new ListNode(4);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(5);

    int k = 2;

    // Call the function
    ListNode* result = addTwoNumbers(l1, l2, k);

    // Print result
    while (result) {
        cout << result->val;
        result = result->next;
    }

    return 0;
}
