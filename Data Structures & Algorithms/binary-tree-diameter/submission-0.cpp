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
    int height(TreeNode* root)
    {
        if(!root)
          return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh, rh)+1;
    }
    void diameter(TreeNode* root, int &ans)
    {
        if(!root)
            return;
        diameter(root->left, ans);
        diameter(root->right, ans);
        int lh=height(root->left);
        int rh=height(root->right);
        ans=max(ans,lh+rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        diameter(root, ans);
        return ans;
        
    }
};
