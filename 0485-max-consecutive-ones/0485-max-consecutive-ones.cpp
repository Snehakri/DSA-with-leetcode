class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count=0;
                continue;
            }
            count++;
            maxi=max(maxi,count);
            //cout<<i<<" i and maxi is "<<maxi<<" count "<<count<<endl;
        }
        return maxi;
    }
};