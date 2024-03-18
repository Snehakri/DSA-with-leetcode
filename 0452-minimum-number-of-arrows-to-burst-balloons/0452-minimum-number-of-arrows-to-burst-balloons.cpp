class Solution {
public:
    // static bool cmp(const vector<vector<int>> & a,const vector<vector<int>> &b){
    //     return a[1]<b[1];
    // }
    int findMinArrowShots(vector<vector<int>>& points) {
        
        ranges:: sort(points,[](const auto &a,const auto &b){
            return a[1]<b[1];
        });
        
        int n=points[0][1];
        int ans=1;
        
        for(auto i:points){
            if(i[0]>n){
                n=i[1];
                ans++;
            }
        }
        return ans;
    }
};