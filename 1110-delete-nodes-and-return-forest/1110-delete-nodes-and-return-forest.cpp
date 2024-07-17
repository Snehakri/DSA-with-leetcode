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
    TreeNode * deletehelper(TreeNode * root,unordered_set<int> & st,vector<TreeNode*>&ans){
        if(root==NULL) return NULL;
        root->right=deletehelper(root->right,st,ans);
        root->left=deletehelper(root->left,st,ans);
        
        if(st.find(root->val)!=st.end()){
            if(root->right) ans.push_back(root->right);
            if(root->left) ans.push_back(root->left);
            return NULL;
        }
        else{
            return root;
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> ans;
        unordered_set <int> st;
        for(auto i:to_delete){
            st.insert(i);
        }
        deletehelper(root,st,ans);
        if(st.find(root->val)==st.end()){
            ans.push_back(root);
        }
        
        return ans;
    }
};