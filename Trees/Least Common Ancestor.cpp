/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 TreeNode* leastcommon_ancestor(TreeNode* root,int l,int r)
 {
    if(root==NULL || root->val==l || root->val==r)
    {
        return root;
    } 
    
    TreeNode* left=leastcommon_ancestor(root->left,l,r);
    TreeNode* right=leastcommon_ancestor(root->right,l,r);
    
    if(left!=NULL && right!=NULL)
    {
        return root;
    }
    
    else if(left==NULL)
    {
        return right;
    }
    
    else
    {
        return left;
    }
 }
 
 bool find(TreeNode *root, int val1) {
            if (!root) return false;
            if (root->val == val1) return true;
            return (find(root->left, val1) || find(root->right, val1));
        }
 
int Solution::lca(TreeNode* root, int B, int C) {
    if (!find(root, B) || !find(root, C)) return -1;
    TreeNode* ans=leastcommon_ancestor(root,B,C);
    if(ans==NULL)
    {
        return -1;
    }
    return ans->val;
}
