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
    vector<vector<int>> res;
    
    void bfs(TreeNode* root, int lev){
        if(root == NULL){
            return;
        }
        
        
        
        if(res.size() < lev){
            res.push_back(vector<int>());
        }
        
       
            res[lev-1].push_back(root->val);
            if(root->left){
                bfs(root->left, lev+1);
            }
            if(root->right){
                bfs(root->right, lev+1);
            }
        }
        
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        bfs(root, 1);
        return res;
        
        
        
        
    }
};