class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n,1);
        int v1=0,v2=0,v3=0;
        for(int i=1;i<n;i++){
            int m1=5*dp[v1];
            int m2=3*dp[v2];
            int m3=2*dp[v3];
            
            dp[i]=min(m1,(min(m2,m3)));
            if(dp[i]==m1) v1++;
            if(dp[i]==m2) v2++;
            if(dp[i]==m3) v3++;
        }
        return dp[n-1];
    }
};