
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long int ans=0;
        int max_v=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_v) max_v=nums[i];
        }
        int i=0,j=0;
        int count=0;
        while(i<=j && j<nums.size()){
            if(nums[j]==max_v) count++;
            while(count==k){
                ans+=(nums.size()-j);
                if(nums[i]==max_v){
                    count--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int k) {
//         int max_v=nums[0];
//         int ans=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>max_v) max_v=nums[i];
//         }
//         int count=0;
//        for(int i=0;i<nums.size();i++){
//            count=0;
//            for(int j=i;j<nums.size();j++){
//                if(nums[j]==max_v) count++;
//                if(count>=k) ans++;             
//            }
//        }
//       return ans;

//     }
// };