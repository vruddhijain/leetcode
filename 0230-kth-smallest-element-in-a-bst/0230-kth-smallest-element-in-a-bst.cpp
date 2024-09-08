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
    
    void x(TreeNode* root, vector<int> & rs){
        
        if(root){
            rs.push_back(root->val);
            
            
        }
        
        if(root->left){ x(root->left , rs);}
        if(root->right){ x(root->right, rs); }
        
    }
    int kthSmallest(TreeNode* root, int k) {
        
   
        
    vector<int> res;
        
    x(root, res);
        
    sort(res.begin(), res.end());
        
    return res[k-1];
    
    
        
    }
};