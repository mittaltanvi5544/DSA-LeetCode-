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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> qu;
        vector<int> rightview;
        qu.push(root);
        if(root==nullptr)
        return rightview;
        while(!qu.empty()){
            int size=qu.size();
            for(int i=1;i<=size;i++)
          {  
            TreeNode* ptr=qu.front();
            qu.pop();

            if(ptr->left!=nullptr)
            qu.push(ptr->left);

            if(ptr->right!=nullptr)
            qu.push(ptr->right);
            
            if(i==size)
            rightview.push_back(ptr->val);
            }

        }
        return rightview;
        
    }
};