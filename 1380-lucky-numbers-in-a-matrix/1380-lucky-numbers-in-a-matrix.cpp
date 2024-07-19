class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> v;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            for(int j=0;j<m;j++){
                mini=min(mini,matrix[i][j]);
            }
            st.insert(mini);
        }
        for(int i=0;i<m;i++){
            int maxi=INT_MIN;
            for(int j=0;j<n;j++){
                maxi=max(matrix[j][i],maxi);
            }
            if(st.find(maxi)!=st.end()){
                v.push_back(maxi);
            }
        }
        return v;
    }
};