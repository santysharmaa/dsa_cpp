#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
  
  
  bool isLeaf(Node* root){
      return (!root->left) && (!root->right);
  }
  
  void left(Node* root , vector<int>& ans){
      Node* curr = root->left;
      
      while(curr){
          if(!isLeaf(curr)){
              ans.push_back(curr->data);
          }
              
              
              if(curr->left){
                  curr = curr->left;
              }
              else{
                  curr = curr->right;
              }
          
      }
  }
  void right(Node* root , vector<int>& ans){
    Node* curr = root->right;
    vector<int> temp;

    while(curr){
        if(!isLeaf(curr)){
            temp.push_back(curr->data);
        }

        if(curr->right){
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }

    for(int i = temp.size() - 1; i >= 0; i--){
        ans.push_back(temp[i]);
    }
}
  
  void leaf(Node* root, vector<int>& ans){
      
      if(!root) return;
      
      
      if(isLeaf(root)) {
          ans.push_back(root->data);
          return;
      }
      
      if(root->left){
          leaf(root->left , ans);
      }
      if(root->right){
          leaf(root->right, ans);
      }
  }
  
  
  
    vector<int> boundaryTraversal(Node *root) {
        // code here
    vector<int> ans;
    if(!root) return ans;
    
    if(!isLeaf(root))
        ans.push_back(root->data);
        
    left(root ,ans);
    leaf(root ,ans);
    right(root ,ans);

    
    return ans;
        
    }
};


int main() {
    int n;
    cin >> n;

    if(n == 0) return 0;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Create root
    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while(!q.empty() && i < n){
        Node* curr = q.front();
        q.pop();

        // Left child
        if(arr[i] != -1){
            curr->left = new Node(arr[i]);
            q.push(curr->left);
        }
        i++;

        // Right child
        if(i < n && arr[i] != -1){
            curr->right = new Node(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    Solution obj;
    vector<int> result = obj.boundaryTraversal(root);

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}