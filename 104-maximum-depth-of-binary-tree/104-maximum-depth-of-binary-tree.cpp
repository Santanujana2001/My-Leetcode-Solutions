class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
//         If The Root Itself NULL Means There Exists No Node In The Tree We Have to Return 0
            return 0;
        }
//         Else We Should Calculate The Depth Of Left Subtree And Right Subtree By Recursion
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
//         If The Depth Of Left Subtree Is Greater Than Right Subtree Then Return (l + 1) The Extra 1 Is For Current Node
        if(l>r){
            return l+1;
        }
//         else Return (r + 1) The Extra 1 Is For Current Node
        return r+1;
    }
};