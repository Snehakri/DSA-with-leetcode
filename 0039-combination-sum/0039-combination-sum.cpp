class Solution {
public:
    void solve(int it,vector<int> temp,vector<int>&candidates,int n,int target,vector<vector<int>>&ans){
        
            if(target==0) {
                cout<<it<<" ";
                ans.push_back(temp);
                return;
            }
        
        if(it>n || target<0) return ;
        
        temp.push_back(candidates[it]);
        solve(it,temp,candidates,n,target-candidates[it],ans);
        temp.pop_back();
        solve(it+1,temp,candidates,n,target,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,temp,candidates,candidates.size()-1,target,ans);
        return ans;
    }
};