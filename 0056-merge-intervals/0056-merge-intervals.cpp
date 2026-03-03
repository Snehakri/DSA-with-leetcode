// class Solution {
// public:
//     // static bool cmp(const vector<vector<int>> &a,const vector<vector<int>> &b){
//     //    
//     // }
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(),intervals.end());
//         vector<vector<int>> ans;
//         int start=intervals[0][0];
//         int end=intervals[0][1];
//         int n=intervals.size();
        
        
//         for(int i=1;i<n;i++){
//             if(intervals[i][0]>end){
//                 ans.push_back({start,end});
//                 start=intervals[i][0];
//                 end=intervals[i][1];
//             }
//             else end=max(intervals[i][1],end);
//         }
        
        
//         ans.push_back({start,end});
//         return ans;
//     }
// };






class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];

        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>end){
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
            else{
                end=max(end,intervals[i][1]);
            }
            
        }
        ans.push_back({start,end});
        return ans;

    }
};