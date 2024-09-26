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
    
     bool x = true;
    void checker(TreeNode* Right,TreeNode* Left)
    {
        
        if(!x)
        {
            return;
        }
        if(Right == nullptr && Left == nullptr)
        {
            return;
        }
        if(Right == nullptr || Left == nullptr)
        {   x = false;
            return;
        }
        if(Right->val == Left->val)
        {
            checker(Right->right,Left->left);
            checker(Right->left,Left->right); 
        }
        else
        {
            x= false;
            return;
        }

    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)
        return true;
        checker(root->right,root->left);
        return x;}
};