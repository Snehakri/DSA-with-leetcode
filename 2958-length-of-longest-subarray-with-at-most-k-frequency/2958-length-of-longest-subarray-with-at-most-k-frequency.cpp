class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int> m;
        int start=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            while(m[nums[i]]==k+1){
                m[nums[start++]]--;
            }
            ans=max(ans,i-start+1);
        }
        return ans;
    }
};