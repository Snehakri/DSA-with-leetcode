// class Solution {
// public:
//     int longestIdealString(string s, int k) {
//         int n=s.size();
//         int i=0;
//         int j=1;
//         int count=1;
//         while(i<n && j<n){
//             int diff=abs(s[i]-s[j]);
//             if(diff<=k){
//                 count++;
//                 i=j;
//                 j++;
//             }
//             else j++;
//         }
//         return count;
//     }
// };
class Solution {
 public:
  int longestIdealString(string s, int k) {
    // dp[i] := the longest subsequence that ends in ('a' + i)
    vector<int> dp(26);

    for (const char c : s) {
      const int i = c - 'a';
      dp[i] = 1 + getMaxReachable(dp, i, k);
    }

    return ranges::max(dp);
  }

 private:
  int getMaxReachable(const vector<int>& dp, int i, int k) {
    const int first = max(0, i - k);
    const int last = min(25, i + k);
    int maxReachable = 0;
    for (int j = first; j <= last; ++j)
      maxReachable = max(maxReachable, dp[j]);
    return maxReachable;
  }
};