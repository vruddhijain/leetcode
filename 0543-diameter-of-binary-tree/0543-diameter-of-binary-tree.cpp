class Solution {
public:
    int re(TreeNode* root, vector<int>& res) {
        if (root == NULL) {
            return 0;  // Base case: If node is NULL, return 0 depth
        }
        
        int ldepth = re(root->left, res);  // Recursively find left depth
        int rdepth = re(root->right, res); // Recursively find right depth

        // The diameter at the current node is the sum of left and right depths
        int diameter = ldepth + rdepth;
        res.push_back(diameter);  // Store the diameter in the result vector
        
        // Return the height of the current node
        return 1 + max(ldepth, rdepth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        vector<int> res;
        re(root, res);
        return *max_element(res.begin(), res.end()); // Return the maximum diameter found
    }
};
