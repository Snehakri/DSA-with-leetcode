class Solution {
public:
    void solve(int it,int target,vector<int>& candidates,int n,vector<int> temp,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=it;i<n;i++){
            if(it!=i && candidates[i]==candidates[i-1]) continue;
            if(target<0) break;
            temp.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,n,temp,ans);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,target,candidates,candidates.size(),temp,ans);
        return ans;
    }
};