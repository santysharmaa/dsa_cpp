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

int Range_Sum_bst(TreeNode* root, int low, int high) {
    if(!root) return 0;

    int sum  = 0;

    if(root->val >= low && root->val <= high){
        sum+=root->val;
    }

    if(root->val > low){
        sum+= Range_Sum_bst(root->left, low, high);
    }
    else{
        sum+= Range_Sum_bst(root->right, low, high);
    }
    return sum;
}


int main() {

    /*
            10
           /  \
          5    15
         / \     \
        3   7     18
    */

    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    int low = 7;
    int high = 15;

    int ans = Range_Sum_bst(root, low, high);

    cout << "Range Sum = " << ans;

    return 0;
}