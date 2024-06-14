// class Solution {
// public:
//     int minIncrementForUnique(vector<int>& nums) {
//         11223   7
//             456
            
//         4-1=3,5-2=3,6-3=3====6
//     }
// };
class Solution {
 public:
  int minIncrementForUnique(vector<int>& nums) {
    int ans = 0;
    int minAvailable = 0;

    ranges::sort(nums);

    for (const int num : nums) {
      ans += max(minAvailable - num, 0);
      minAvailable = max(minAvailable, num) + 1;
    }

    return ans;
  }
};