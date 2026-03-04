// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(i>0 && nums[i]==nums[i-1]) continue;
//             int j=i+1;
//             int k=nums.size()-1;
//             while(j<k){
//                 int sum=(nums[i]+nums[j]+nums[k]);
//                 if(sum>0) k--;
//                 else if(sum<0) j++;
//                 else {
//                     vector<int> temp = {nums[i],nums[j],nums[k]};
//                     ans.push_back(temp);
//                     k--;
//                     j++;
//                     while(j<k && nums[j]==nums[j-1]) j++;
//                     while(k>j && nums[k]==nums[k+1]) k--;
//                 }}}
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int sum=0;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                sum=(nums[i]+nums[l]+nums[r]);
                
                if(sum>0){
                    r--;
                }
                else if(sum<0) l++;
                else {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    r--;
                    l++;
                    while(l<r && nums[l]==nums[l-1]) l++;
                    while(r>l && nums[r]==nums[r+1]) r--;
                }
               
            }
         }
         return ans;
    }
};











