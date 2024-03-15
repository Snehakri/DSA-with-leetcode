class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        int sum=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) {
                count++;
            }
            else sum*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(count>=2){
                v.push_back(0);
            }
            else if(nums[i]!=0 && count==0){
                 int n=sum/nums[i];
                v.push_back(n);
            }
            else if(nums[i]!=0 && count!=0){
                v.push_back(0);   
            }
            else v.push_back(sum);
        }
        return v;
    }
};