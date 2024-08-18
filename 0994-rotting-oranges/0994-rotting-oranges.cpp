class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int days=0;
        vector<vector<int>> dp(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        int countone=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    dp[i][j]=2;
                }
                if(grid[i][j]==1){
                    dp[i][j]=1;
                    countone++;
                }
            }
        }
        int di[4]={1,0,0,-1};
        int dj[4]={0,1,-1,0};
        int onecount=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int rows=r+di[i];
                int cols=c+dj[i];
                if(rows<n && rows>=0 && cols<m && cols>=0 && dp[rows][cols]==1){
                    onecount++;
                    dp[rows][cols]=2;
                    q.push({{rows,cols},t+1});
                }
            }
            days=t;
        }
        if(countone!=onecount) return -1;
        return days;
    }
};