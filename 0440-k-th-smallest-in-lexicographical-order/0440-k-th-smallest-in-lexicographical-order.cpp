class Solution {
 public:
  int findKthNumber(int n, int k) {
    long ans = 1;

    for (int i = 1; i < k;) {
      const long gap = getGap(ans, ans + 1, n);
      if (i + gap <= k) {
        i += gap;
        ++ans;
      } else {
        ++i;
        ans *= 10;
      }
    }

    return ans;
  }

 private:
  long getGap(long a, long b, long n) {
    long gap = 0;
    while (a <= n) {
      gap += min(n + 1, b) - a;
      a *= 10;
      b *= 10;
    }
    return gap;
  };
};
// // class Solution {
// // public:
// //     int findKthNumber(int n, int k) {
// //         long long currNum=1;
// //         for(int i=0;i<n;i++){
// //             k--;
// //             if(k==0) return currNum;
// //             if(currNum*10 <= n){
// //                 currNum*=10;
// //             }
// //             else{
// //                 while(currNum%10==9 || currNum==n){
// //                     currNum/=10;
// //                 }
// //                 currNum+=1;
// //             }
// //         }
// //         return -1;
// //     }
// // };681692778
// // 351251360
// class Solution {
// public:
//     void dfs(long long currNum,int target,int &ans,int &k){
//         if(currNum>target) return;
//         k--;
//         if(k==0) {
//             ans=currNum;
//             return;
//         }
//         for(int i=0;i<10;i++){
//             if(currNum*10+i > target) break;
//             dfs(currNum*10+i,target,ans,k);
//         }
        
//     }
//     int findKthNumber(int n, int k) {
//         //vector<int> res(k);
//         int ans=0;
//         for(int i=1;i<10;i++){
//             if(i>n) break;
//             dfs(i,n,ans,k);
//         }
//         // for(int i=0;i<res.size();i++){
//         //     cout<<res[i]<<" ";
//         // }
//         return ans;
//     }
// };