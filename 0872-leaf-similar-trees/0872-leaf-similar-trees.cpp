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
    void getLeafNodes(TreeNode* root, std::vector<int>& leaves) {
    if (root == nullptr) {
        return;
    }

    if (root->left == nullptr && root->right == nullptr) {
        // This is a leaf node
        leaves.push_back(root->val);
    }

    // Recursively traverse left and right subtrees
    getLeafNodes(root->left, leaves);
    getLeafNodes(root->right, leaves);
}

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       
    vector<int> arr1, arr2;
    getLeafNodes(root1, arr1);
        
        
    getLeafNodes(root2, arr2);
        
//     sort(arr1.begin(), arr1.end());
//     sort(arr2.begin(), arr2.end());
        
    return arr1==arr2;
        
    }
};