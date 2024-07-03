class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=3) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        int a=nums[n-4]-nums[0];
        int b=nums[n-1]-nums[3];
        int c=nums[n-2]-nums[2];
        int d=nums[n-3]-nums[1];
        int e=min(c,d);
        int f=min(a,b);
        return min(e,f);
    }
};