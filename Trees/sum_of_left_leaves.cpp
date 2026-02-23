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


int sumOfLeftLeaves(TreeNode* root) {
    if(root == nullptr) return 0;

    int sum = 0;
    if(root->left && root->left->left == nullptr && root->left->right == nullptr){
        sum += root->left->val;
    }
    sum+=sumOfLeftLeaves(root->left);
    sum+=sumOfLeftLeaves(root->right);
    return sum;
}


int main() {

    /*
            3
           / \
          9  20
             / \
            15  7

    Left leaves = 9 + 15 = 24
    */

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    int result = sumOfLeftLeaves(root);

    cout << "Sum of left leaves: " << result << endl;

    return 0;
}