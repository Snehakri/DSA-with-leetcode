class Solution {
public:
    void solve(int col,int n,vector<string> &board,vector<int> &leftmost,vector<int>                               &upperdiagonal,vector<int> &lowerdiagonal,vector<vector<string>>& ans){
        
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftmost[row]==0 && upperdiagonal[n-1+col-row]==0 && lowerdiagonal[row+col]==0){
                board[row][col]='Q';
                leftmost[row]=1;
                upperdiagonal[n-1+col-row]=1;
                lowerdiagonal[row+col]=1;
                solve(col+1,n,board,leftmost,upperdiagonal,lowerdiagonal,ans);
                board[row][col]='.';
                leftmost[row]=0;
                upperdiagonal[n-1+col-row]=0;
                lowerdiagonal[row+col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++) board[i]=s;
        vector<int> leftmost(n,0),upperdiagonal(2*n-1,0),lowerdiagonal(2*n-1,0);
        
        solve(0,n,board,leftmost,upperdiagonal,lowerdiagonal,ans);
        return ans;
    }
};