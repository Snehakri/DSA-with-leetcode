// class Solution {
// public:
//     void solve(int it,int target,vector<int>& candidates,int n,vector<int> temp,vector<vector<int>>&ans){
//         if(target==0){
//             ans.push_back(temp);
//             return;
//         }
//         for(int i=it;i<n;i++){
//             if(it!=i && candidates[i]==candidates[i-1]) continue;
//             if(target<0) break;
//             temp.push_back(candidates[i]);
//             solve(i+1,target-candidates[i],candidates,n,temp,ans);
//             temp.pop_back();
//         }
//         return;
//     }
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         vector<vector<int>> ans;
//         vector<int> temp;
//         solve(0,target,candidates,candidates.size(),temp,ans);
//         return ans;
//     }
// };
class Solution {
public:
    void solve(int it,int sum,vector<int> temp,vector<int>& candidates, int target,vector<vector<int>> & ans){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target) return ;
        for(int i=it;i<candidates.size();i++){
            if(it!=i && candidates[i]==candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            sum+=candidates[i];
            solve(i+1,sum,temp,candidates,target,ans);
            sum-=candidates[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,0,temp,candidates,target,ans);
        return ans;
    }
};





















