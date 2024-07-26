class Solution {
public:
    void solve(vector<int>& nums,vector<int> temp, vector<vector<int>>& ans,vector<int> vis){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                temp.push_back(nums[i]);
                vis[i]=1;
                solve(nums,temp,ans,vis);
                vis[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> vis(nums.size()+1,0);
        solve(nums,temp,ans,vis);
        return ans;
    }
};