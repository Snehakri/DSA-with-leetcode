class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int i=0,j=0;
        vector<vector<int>> m(rowSum.size(),vector<int> (colSum.size(),0));
        while(i<rowSum.size() && j<colSum.size()){
            m[i][j]=min(rowSum[i],colSum[j]);
            rowSum[i]-=m[i][j];
            colSum[j]-=m[i][j];
            if(colSum[j]==0){
                j++;
            }
            if(rowSum[i]==0){
                i++;
            }
        }
        return m;
            
    }
};