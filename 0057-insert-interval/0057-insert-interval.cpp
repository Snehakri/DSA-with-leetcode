class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& n) 
    {
        vector<vector<int>> ans;
        for(auto i:intervals){
            if(i[1]<n[0]){
                ans.push_back(i);
            }
            else if(n[1]<i[0]){
                ans.push_back(n);
                n=i;
            }
            else {
                n[0]=min(i[0],n[0]);
                n[1]=max(i[1],n[1]);
            }
        }
        ans.push_back(n);
        
        return ans;
    }
};
    // static bool cmp(vector<vector<int>> & A,vector<vector<int>> & B){
    //     return A[0]<B[0];
    // }
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
//         intervals.push_back(newInterval);
//         sort(intervals.begin(),intervals.end());
//         int j=0;// for ans vector
//         vector<vector<int>> ans;x
//         int d=intervals[0][1];
//         int e=intervals[0][0];
//         ans[j][0]=e;
//         ans[j][1]=d;
//         for(int i=1;i<intervals.size();i++){
//             if(intervals[i][0]<d){
//                 ans[j][0]=e;
//                 ans[j][1]=intervals[i][1];
//                 j++;
//                 d=intervals[i][1];
//             }
//             else{
//                 j++;
//                 ans[j][0]=intervals[i][0];
//                 ans[j][1]=intervals[i][1];
//                 d=intervals[i][1];
//                 e=intervals[i][0];
//                 j++;
//             }
//         }
//         return ans;
//     }
// };