class Solution {
public:
    vector<int> solve(int row){
        vector<int> ans1;
        ans1.push_back(1);
        long long mul=1;
        for(int col=1;col<row;col++){
            mul*=(row-col);
            mul/=col;
            ans1.push_back(mul);
        }
        return ans1;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(solve(i));
        }
        return ans;
    }
};