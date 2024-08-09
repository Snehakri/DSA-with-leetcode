class Solution {
public:
    int colsum(int row,int col,vector<vector<int>>& grid){
        int sum=0;
        for(int j=0;j<3;j++){
            int cols=0;
            for(int i=0;i<3;i++){
                int n=grid[row+i][col+j];
                cols+=n;
            }
            if(j==0){
                sum=cols;
            }
            else{
                if(sum!=cols) return -1;
            }
        }
        return sum;
    }
    int rowsum(int row,int col,vector<vector<int>>& grid){
        vector<int> vis(10,0);
        int sum=0;
        for(int i=0;i<3;i++){
            int rows=0;
            for(int j=0;j<3;j++){
                int val=grid[row+i][col+j];
                rows+=val;
                if(val==0 || val>=10 || vis[val]){
                    return -1;
                }
                vis[val]=1;
            }
            if(i==0){
                sum=rows;
            }
            else{
                if(sum!=rows) return -1;
            }
        }
        return sum;
    }
    int diagonalsum(int row,int col,vector<vector<int>>& grid){
        int d1=grid[row][col+2]+grid[row+1][col+1]+grid[row+2][col];
        int d2=grid[row][col]+grid[row+1][col+1]+grid[row+2][col+2];
        if(d1!=d2) return -1;
        return d1;
    }
    bool ismagicsquare(int row,int col,vector<vector<int>>& grid){
        
        int rsum=rowsum(row,col,grid);
       // cout<<rsum<<" ";
        if(rsum==-1) return false;
        int csum=colsum(row,col,grid);
        //cout<<csum<<" ";
        if(csum==-1) return false;
        int dsum=diagonalsum(row,col,grid);
        //cout<<dsum<<" ";
        if(dsum==-1) return false;
        if(rsum==csum && rsum==dsum){
            return true;
        }
        return false;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count=0;
        int n = grid.size();
        int m = grid[0].size();
        for(int row=0;row<n-2;row++){
            for(int col=0;col<m-2;col++){
                if(ismagicsquare(row,col,grid)){
                    cout<<"yes";
                    count++;
                }
            }
        }
        return count;
    }
   
};
