class Solution {
 public:
  vector<int> finalPrices(vector<int>& prices) {
      stack <int> st;
      int n=prices.size();
      st.push(prices[n-1]);
      int i=n-2;
      while(i>=0){
          while(!st.empty() && prices[i]<st.top()){
              st.pop();
          }
          int num=0;
          if(!st.empty()){
              num=st.top();
          }
          st.push(prices[i]);
          prices[i]-=num;
          i--;
      }
      return prices;
  }
};