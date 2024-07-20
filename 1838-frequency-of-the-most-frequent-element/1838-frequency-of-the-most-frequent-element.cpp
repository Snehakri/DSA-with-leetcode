class Solution {
 public:
  int maxFrequency(vector<int>& nums, int k) {
//     int ans = 0;
//     long sum = 0;

//     ranges::sort(nums);

//     for (int l = 0, r = 0; r < nums.size(); ++r) {
//       sum += nums[r];
//       while (sum + k < static_cast<long>(nums[r]) * (r - l + 1))
//         sum -= nums[l++];
//       ans = max(ans, r - l + 1);
//     }

//     return ans;
      
      sort(nums.begin(),nums.end());
      int n=nums.size();
      long long int l=0,sum=0,maxi=0;
      for(int r=0;r<n;r++){
          sum+=nums[r];
          while(l<r && nums[r]*(r-l+1)>sum+k){
              sum-=nums[l];
              l++;
          }
          maxi=max(maxi,r-l+1);
      }
      return maxi;
  }
};
