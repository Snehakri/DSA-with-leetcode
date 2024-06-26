class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        map<int,int> m;
        m[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(m.find(sum%k)!=m.end()){
                int ind=m[sum%k];
                if((i-ind)>=2) return true;
            }
            else m[sum%k]=i;
        }
        return false;
    }
};