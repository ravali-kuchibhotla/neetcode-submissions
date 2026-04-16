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
    void inorder(TreeNode* root, int k, int &count, TreeNode* &ans)
    {
        if(root==NULL)
          return ;
        inorder(root->left, k, count, ans);
        cout<<root->val<<" ";
        count++;
        if(count==k)
          ans=root;
        inorder(root->right, k, count, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
          return -1;
        int count=0;
        TreeNode* ans=NULL;
        inorder(root, k, count, ans);
        if(ans==NULL)
          return-1;
        return ans->val;
    }
};
