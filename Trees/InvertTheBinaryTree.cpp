#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void invert(TreeNode* root){
    if(!root) return;

    invert(root->left);
    invert(root->right);
    swap(root->left, root->right);
}


TreeNode* invert_binary_tree(TreeNode* root){
    invert(root);

    return root;
}

void inorder(TreeNode* root) {
    if(!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {

    /*
            4
           / \
          2   7
         / \ / \
        1  3 6  9
    */

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Inorder before invert: ";
    inorder(root);
    cout << endl;

    invert_binary_tree(root);

    cout << "Inorder after invert: ";
    inorder(root);
    cout << endl;

    return 0;
}