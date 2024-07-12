class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        
        int low=0;
        int high=(n*m)-1;
        while(low<=high){
            int mid=(low+high)/2;
            int i=mid/m;
            int j=mid%m;
            if(mat[i][j]==target){
                return true;
            }
            else if(mat[i][j]>target){
                high=mid-1;
            }
            else low=mid+1;
        }
        return false;
    }
    
};
