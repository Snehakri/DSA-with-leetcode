class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int ans=0;
        long sum=1;
        int i=0;
        while(sum<=n){
            if(i<nums.size() && nums[i]<=sum) {
                sum+=nums[i];
                i++;
            }
            else {
                sum+=sum;
                ans++;
            }
        }
        return ans;
    }
};
// class Solution {
//  public:
//   int minPatches(vector<int>& nums, int n) {
//     int ans = 0;
//     int i = 0;      // nums' index
//     long miss = 1;  // the minimum sum in [1, n] we might miss

//     while (miss <= n)
//       if (i < nums.size() && nums[i] <= miss) {
//         miss += nums[i++];
//       } else {
//         // Greedily add `miss` itself to increase the range from
//         // [1, miss) to [1, 2 * miss).
//         miss += miss;
//         ++ans;
//       }

//     return ans;
//   }
// };