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
// class Solution {
// public:
//     void solve(TreeNode* root,int h,int v,map<int,vector<int>> &mp){
//         if(!root) return ;
//         mp[h].push_back(root->val);
//          solve(root->right,h+1,v+1,mp);
//         solve(root->left,h-1,v+1,mp);
       
//     }
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         map<int,vector<int>> mp;
//         vector<vector<int>> ans;
//         solve(root,0,0,mp);
//         for(auto it:mp){
//             //sort(it.second.begin(),it.second.end());[3,1,4,0,2,2]
//             ans.push_back(it.second);
//         }
//         return ans;
        
//     }
// };
class Solution {
 public:
  void solve(TreeNode* root, int x, int y,map<int, multiset<pair<int, int>>>& mp) {
    if (root == nullptr)
      return;
    mp[x].emplace(y, root->val);
    solve(root->left, x - 1, y + 1, mp);
    solve(root->right, x + 1, y + 1, mp);
  }
    
  vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>> ans;
    map<int, multiset<pair<int, int>>> mp;  // {x: {(-y, val)}}

    solve(root, 0, 0, mp);

    for (auto it : mp) {
      vector<int> temp;
      for (auto i:it.second){
       temp.push_back(i.second);
      }
      ans.push_back(temp);
    }

    return ans;
  }

};