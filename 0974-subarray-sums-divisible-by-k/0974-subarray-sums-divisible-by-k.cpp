class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        map<int,int> m;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int mod=sum%k;
            if(mod<0) {
                mod=mod%k+k;
            }
            if(m.find(mod)!=m.end()){
                count+=m[mod];
            }
            m[mod]++; 
        }
        return count;
    }
};