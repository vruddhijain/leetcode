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
    vector <int> re(TreeNode* root){
        vector<int> res;
        if (root == NULL) {
        return res;
    }
    
    if (root->left) {
        vector<int> leftRes = re(root->left);
        res.insert(res.end(), leftRes.begin(), leftRes.end());
    }
    
    if (root->right) {
        vector<int> rightRes = re(root->right);
        res.insert(res.end(), rightRes.begin(), rightRes.end());
    }
    
    res.push_back(root->val);
    
    return res;
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        
       return re(root);
        
   
        
    }
};