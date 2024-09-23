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
    
    int ma = 0;
    int re(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        
        
        int left = re(root->left);
        int right = re(root->right);
        
        int dep = max(left, right) + 1;
        
        ma = max(ma, left+right);
        
        return dep;
        
        
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int r = re(root);
        return ma;
        
        
    }
};