class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) count++;
        }
        int zeros=0;
        for(int i=0;i<count;i++){
            if(nums[i]==0) zeros++;
        }
        if(zeros==0 || count==1) return 0;
        int i=0,j=count-1;
        int ans=INT_MAX;
        while(i<n){
            ans=min(ans,zeros);
            if(nums[i]==0) zeros--;
            i++;
            j++;
            if(nums[j%n]==0) zeros++;
            // ans=min(ans,zeros);
            //i++,j++;
        }
        return ans;
    }
};