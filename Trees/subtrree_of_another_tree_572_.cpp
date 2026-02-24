#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



/// Check if two trees are exactly same
bool isSame(TreeNode* a, TreeNode* b) {
    if (!a && !b) return true;     // both null
    if (!a || !b) return false;    // one null
    if (a->val != b->val) return false;

    return isSame(a->left, b->left) && isSame(a->right, b->right);
}

/// Main subtree function
bool isSubtree(TreeNode* root, TreeNode* subRoot) {

    if (!subRoot) return true;   // empty tree is always subtree
    if (!root) return false;

    if (isSame(root, subRoot))
        return true;

    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}

int main() {

    /*
            root tree
                3
               / \
              4   5
             / \
            1   2
    */

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    /*
            subRoot tree
                4
               / \
              1   2
    */

    TreeNode* subRoot = new TreeNode(4); 
    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);

    if (isSubtree(root, subRoot))
        cout << "Yes, it is a subtree\n";
    else
        cout << "No, it is not a subtree\n";

    return 0;
}
