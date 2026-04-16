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
    int isGood(TreeNode* root, int &count, int largest)
    {
        if(root->val >= largest)
        {
          count++;
          largest=root->val;
        }
        cout<<root->val<<" "<<largest<<"; ";
        if(root->left)
          isGood(root->left, count, largest);
        if(root->right)
          isGood(root->right, count, largest);
        return count;
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        return isGood(root, count, INT_MIN);
    }
};
