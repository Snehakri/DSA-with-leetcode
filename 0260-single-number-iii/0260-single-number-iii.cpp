class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else v.push_back(nums[i]);
        }
        if(i==nums.size()-1) v.push_back(nums[i]);
        return v;
    }
};