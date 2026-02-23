#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

 bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == nullptr && q == nullptr) return true;
    if(p == nullptr || q == nullptr) return false;
    if(p->val != q->val) return false;

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {

    /*
        Tree 1:
            1
           / \
          2   3

        Tree 2:
            1
           / \
          2   3
    */

    // Tree 1
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    // Tree 2
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    if(isSameTree(root1, root2))
        cout << "Trees are SAME" << endl;
    else
        cout << "Trees are NOT SAME" << endl;

    return 0;
}