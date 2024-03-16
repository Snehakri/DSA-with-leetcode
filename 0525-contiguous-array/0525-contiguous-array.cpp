class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> pre_sum;
        pre_sum[0]=-1;
        int pre=0;
        int ps=0;
        int len=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ps+=-1;
            }
            else ps+=1;
            
            if(pre_sum.find(ps)!=pre_sum.end()){
                len=max(len,i-pre_sum[ps]);
            }
            else pre_sum[ps]=i;
        }
        return len;
    }
};