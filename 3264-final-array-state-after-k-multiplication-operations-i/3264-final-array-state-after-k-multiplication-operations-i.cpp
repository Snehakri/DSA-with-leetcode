class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        using p=pair<int,int>;
        priority_queue<p,vector<p>,greater<>> mini;
        
        for(int i=0;i<nums.size();i++){
            mini.emplace(nums[i],i);
        }
        vector<int> ans(nums.size());
        while(k>0){
            auto [num,i]=mini.top();
            mini.pop();
            mini.emplace(num*multiplier,i);
            k--;
        }
        while(!mini.empty()){
            auto [num,i]=mini.top();
            mini.pop();
            ans[i]=num;
        }
        
        return ans;
            
    }
};