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

// int diameter = 0;

// int height(TreeNode* root){

//     int leftHeight = height(root->left);
//     int rightHeight = height(root->right);

//     diameter = max(diameter, leftHeight + rightHeight);
//     return 1 + max(leftHeight , rightHeight);
// } 

// int bf_diameter(TreeNode* root){
//     if(!root) return 0;

//     height(root);
//     return diameter;
// }

//optimal
int height(TreeNode* root) {
    if(root == nullptr) return 0;

    return 1 + max(height(root->left), height(root->right) );
}

int diameterOfBinaryTree(TreeNode* root){
    if(!root) return 0;

    int lf = height(root->left);
    int rt = height(root->right);

    return max( (lf + rt) , max( diameterOfBinaryTree(root->left) , diameterOfBinaryTree(root->right) ) );
}

int main() {

    /*
            1
           / \
          2   3
         / \
        4   5

    Diameter = 3 (path: 4-2-1-3 or 5-2-1-3)
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter: " << diameterOfBinaryTree(root) << endl;

    return 0;
}