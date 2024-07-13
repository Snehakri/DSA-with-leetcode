class Solution {
public:
    // int help(int i,int j,int m,int n,vector<vector<int> > dp){
    //     if(i>=m || j>=n) return 0;
    //     if(i==(m-1) && j==(n-1)) return 1;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     return dp[i][j]=help(i+1,j,m,n,dp) + help(i,j+1,m,n,dp);
    // }
    int m=1e9;
    int uniquePaths(int m, int n) {
        // vector<vector<int> > dp(m,vector<int> (n,-1));
        // return help(0,0,m,n,dp);
        int N = n + m - 2;
            int r = m - 1; 
            double res = 1;
            
            for (int i = 1; i <= r; i++)
                res = res * (N - r + i) / i;
            return (int)res;
        
        // int num=(n+m-2);
        // int r=m-1;
        // long long ans=1;
        // for(int i=1;i<=r;i++){
        //     ans=(ans*(num-i+1))/i;
        // }
        // return ans%m;
    }
};