/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)
        return nullptr;

        if(key>root->val)
        root->right=deleteNode(root->right, key);

        else if(key<root->val)
        root->left=deleteNode(root->left, key);

          else{

                if(root->left==nullptr && root->right==nullptr)
                return nullptr;

                if(root->left!=nullptr && root->right==nullptr)
                return root->left;

                if(root->left==nullptr && root->right!=nullptr)
                return root->right;

                else{
                    TreeNode* prev=nullptr;
                     TreeNode* ptr=root->right;
                     while(ptr->left!=nullptr){
                        prev=ptr;
                        ptr=ptr->left;
                     }
                     root->val=ptr->val;
                     if(prev!=nullptr)
                     {
                        if(ptr->right!=nullptr)
                        prev->left=ptr->right;
                        else
                        prev->left=nullptr;}
                     else
                     root->right=ptr->right;

                }
          }
          return root;
        
    }
};