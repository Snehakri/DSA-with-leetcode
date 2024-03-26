// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int maxv=nums.size();
//         int xor_val=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>maxv){
//                 maxv=nums[i];
//             }
//             xor_val^=nums[i];
//         }
//         sort(nums.begin(),nums.end());
// /
class Solution {
 public:
    int firstMissingPositive(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0 && nums[i]<=nums.size() && nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1) return i+1;
        }
        return nums.size()+1;
    }
};