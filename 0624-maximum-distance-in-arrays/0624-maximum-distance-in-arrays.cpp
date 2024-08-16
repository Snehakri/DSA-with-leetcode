class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int ans=INT_MIN;
        int n=arrays[0].size();
        int mini=arrays[0][0];
        int maxi=arrays[0][n-1];
        for(int i=1;i<arrays.size();i++){
            n=arrays[i].size();
            cout<<mini<<"  <-mini ans maxi-> "<< maxi<<endl;
            ans=max(ans,max(abs(mini-arrays[i][n-1]),abs(maxi-arrays[i][0])));
            mini=min(mini,arrays[i][0]);
            maxi=max(maxi,arrays[i][n-1]);
        }
        return ans;
        
    }
};