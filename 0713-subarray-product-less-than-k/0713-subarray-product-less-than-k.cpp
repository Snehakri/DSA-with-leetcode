// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int count=0;
//         int mul_val=1;
//         for(int i=0;i<nums.size();i++){
//             int k=0;
//             int j=i;
//             int mul_val=1;
//             while(k<nums.size() && j<nums.size){
//                 for(int l=k;l<j;i++){
//                     mul_val*=nums[i];
//                 }
//                 k+=i;
//                 j+=
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long count=0;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]<k)
          {
            count++;      
          }
        }
        for(int i=0;i<nums.size();i++){
            long long int p=nums[i];
            for(int j=i+1;j<nums.size();j++){
                p= p*nums[j];
                if(p<k)
                    count++;
                else if(p>=k)
                break;
            }
           
        }
        return count;
    }
};