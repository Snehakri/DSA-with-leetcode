// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         next_permutation(nums.begin(),nums.end());
//     }
// };
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // next_permutation(nums.begin(),nums.end());
        int n=nums.size();
        int max=nums[n-1];
        int ind=-1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<max){
                ind=i;
                break;
            }
            max=nums[i];
        }
        if(ind!=-1){
    
        for(int i=n-1;i>=0;i--){
            if(nums[ind]<nums[i]){
                swap(nums[ind],nums[i]);
                    break;
            }
        }
        }
        sort(nums.begin()+ind+1,nums.end());
        
        
    }
};