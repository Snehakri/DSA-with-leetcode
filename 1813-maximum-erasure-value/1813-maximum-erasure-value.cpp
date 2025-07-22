// class Solution {
// public:
//     int maximumUniqueSubarray(vector<int>& arr) {
//         map<int,int> mp;
//         int start=0,ans=0,sum=0;
//         for(int i=0;i<arr.size();i++){
//             if(mp.find(arr[i])!=mp.end()){
//                 if(mp[arr[i]] >= start){
//                     start=i+1;
//                 }
//                 mp[arr[i]]=i;
//                 continue;
//             }
//             sum+=arr[i];
//             //out<<sum<<" ";
//             mp[arr[i]]=i;
//         }
//         return sum;
//     }
// };
class Solution {
 public:
  int maximumUniqueSubarray(vector<int>& nums) {
    int ans = 0;
    int score = 0;
    unordered_set<int> seen;

    for (int l = 0, r = 0; r < nums.size(); ++r) {
      while (!seen.insert(nums[r]).second) {
        score -= nums[l];
        seen.erase(nums[l++]);
      }
      score += nums[r];
      ans = max(ans, score);
    }

    return ans;
  }
};


