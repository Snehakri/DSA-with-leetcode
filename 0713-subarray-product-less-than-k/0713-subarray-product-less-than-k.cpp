class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       if(k<=1) return 0;
       int count=0;
        int i=0,j=0;
        int prod=1;
        while(i<=j && j<nums.size()){
            prod*=nums[j];
            while(prod>=k){
                prod/=nums[i];
                i++;
            }
            count+=(j-i+1);
            j++;
        }
        return count;
    }
};
// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         long count=0;
//         for(int i=0;i<nums.size();i++)
//         {
//           if(nums[i]<k)
//           {
//             count++;      
//           }
//         }
//         for(int i=0;i<nums.size();i++){
//             long long int p=nums[i];
//             for(int j=i+1;j<nums.size();j++){
//                 p= p*nums[j];
//                 if(p<k)
//                     count++;
//                 else if(p>=k)
//                 break;
//             } 
//         }
//         return count;
//     }
// };