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
//         long int i=1;
//         int j=0;
//         cout<<maxv;
//         while(i<=maxv+1 && j<nums.size()){
//             int n=i^nums[j];
//             if(nums[j]<i && nums[j]<=0){
//                 i--;
//             }
//             if(nums[j]>0 && n!=0){
//                 return i;
//             }
//             else if(nums[j]<=0){
//                 i--;
//             } 
            
            
//             j++;
//             i++;
//             // cout<<i<<"and"<<j;
//         }
//         return i;
        
//     }
// };
class Solution {
 public:
  int firstMissingPositive(vector<int>& nums) {
    const int n = nums.size();

    // Correct slot:
    // nums[i] = i + 1
    // nums[i] - 1 = i
    // nums[nums[i] - 1] = nums[i]
    for (int i = 0; i < n; ++i)
      while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
        swap(nums[i], nums[nums[i] - 1]);

    for (int i = 0; i < n; ++i)
      if (nums[i] != i + 1)
        return i + 1;

    return n + 1;
  }
};