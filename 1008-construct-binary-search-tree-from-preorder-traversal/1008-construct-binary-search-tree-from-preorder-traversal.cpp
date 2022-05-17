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
    TreeNode* bst(TreeNode* &root,int e){
    if(!root){
        return root=new TreeNode(e);
    }
    if(root->val>e){
        root->left=bst(root->left,e);
    }
    else{
        root->right=bst(root->right,e);
    }
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=NULL;
         for(auto i:preorder){
       bst(root,i);
                 }
         return root;
    }
};