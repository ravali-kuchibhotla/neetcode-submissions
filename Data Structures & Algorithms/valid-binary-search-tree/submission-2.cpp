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
    bool valid(TreeNode* root, int min, int max)
    {
        if(!root)
          return true;
        if(root->val <=min || root->val >=max)
          return false;
        if(!valid(root->left, min, root->val))
          return false;
        else if(!valid(root->right, root->val, max))
          return false;
        return true;
    }
    bool isValidBST(TreeNode* root) {
        int min=INT_MIN;
        int max=INT_MAX;
        return valid(root, min, max);
    }
};
