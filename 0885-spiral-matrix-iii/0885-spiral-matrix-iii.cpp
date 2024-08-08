class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int di[]={0,1,0,-1};
        int dj[]={1,0,-1,0};
        int n=rows*cols;
         vector<vector<int>> ans(n,vector<int>(2));
        ans[0][0]=rStart;
        ans[0][1]=cStart;
        int steps=1;
        int count=1;
        int ind=0;
        while(count<n){
            for(int j=0;j<2;j++){
                for(int i=0;i<steps;i++){
                    rStart+=di[ind%4];
                    cStart+=dj[ind%4];
                    if(rStart>=0 && rStart<rows && cStart>=0 && cStart<cols){
                        ans[count][0]=rStart;
                        ans[count][1]=cStart;
                        count++;
                    }
                }
                ind++;
            }
            steps++;
        }
        return ans;
    }
};