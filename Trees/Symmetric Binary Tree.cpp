/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 bool checksymetry(TreeNode* left,TreeNode* right)
 {
    
     if(left==NULL || right==NULL )
     {
         return left==right;
     }
     
     if(left->val!=right->val)
     {
         return false;
     }
     
     return checksymetry(left->left,right->right) && checksymetry(left->right,right->left);
 }
int Solution::isSymmetric(TreeNode* A) {
    
    if(A==NULL)
    {
        return 1;
    }
    
    return checksymetry(A->left,A->right);
    
}
