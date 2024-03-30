class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>& nums, int k) {
        map<int,int> m;
        int ans=0;
        int j=0,i=0;
        while(i<=j && j<nums.size()){
            m[nums[j]]++;
            while(m.size()>k){            
                    m[nums[i]]--;
                    if(m[nums[i]]==0) m.erase(nums[i]);
                    i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};