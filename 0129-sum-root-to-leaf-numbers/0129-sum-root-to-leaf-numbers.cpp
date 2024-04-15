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
    int sum=0;
    void solve(TreeNode* root,int cur_no){
        if(!root) return;
        cur_no=cur_no*10+root->val;
        if(root->right==NULL & root->left==NULL){
            sum+=cur_no;
            return;
        }
        solve(root->left,cur_no);
        solve(root->right,cur_no);
        return;
    }
    int sumNumbers(TreeNode* root) {
        solve(root,0);
        return sum;
    }
};