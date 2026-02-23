#include <bits/stdc++.h>
using namespace std;
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void traverse(TreeNode* root, int& count){
    if(!root) return;

    traverse(root->left , count);
    count++;
    traverse(root->right , count);
    
}

int count_nodes(TreeNode* root){
    int count = 0;

    traverse(root, count);

    return count;
}
int SScount_nodes(TreeNode* root){
    if(!root) return 0;

    return 1 + SScount_nodes(root->left) + SScount_nodes(root->right);
}

int main() {
    
    /*
            1
           /  \
          2    3
         / \   / 
        4   5 6  
    */
    
    TreeNode* root = new TreeNode(1);
    
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    root->right->left = new TreeNode(6);
    // root->right->right = new TreeNode(18);
    
    cout<<count_nodes(root);
    
    return 0;
}

//O(log)2 N
int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;
        int l = 0, r = 0;
        TreeNode* leftn = root;
        TreeNode* rightn = root;

        while(leftn){
            l++;
            leftn = leftn->left;
        }
        while(rightn){
            r++;
            rightn=rightn->right;
        }

        if(l == r){
            return pow(2, l) - 1;
        }
        return 1+countNodes(root->left) + countNodes(root->right);
    }