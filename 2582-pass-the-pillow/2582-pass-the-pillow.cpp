class Solution {
 public:
  int passThePillow(int n, int time) {
//     time %= (n - 1) * 2;
//     if (time < n)
//       return 1 + time;
      
//     return n - (time - (n - 1));
      
      int totalround=time/(n-1);
      if(totalround%2!=0){
         return n-(time%(n-1));
      }
      else return time%(n-1)+1;
  }
};