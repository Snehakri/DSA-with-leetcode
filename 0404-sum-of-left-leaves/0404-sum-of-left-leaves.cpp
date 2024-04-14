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
    int solve(TreeNode* root,bool isleftchild){
        if(root->left==NULL && root->right==NULL){
            return (isleftchild)?root->val:0;
        }
        int sum=0;
        if(root->left!=NULL) sum+=solve(root->left,1);
        if(root->right!=NULL) sum+=solve(root->right,0);
        return sum;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root,0);
    }
};