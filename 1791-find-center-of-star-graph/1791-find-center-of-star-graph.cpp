class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> m;
        for(int i=0;i<edges.size();i++){
            m[edges[i][1]]++;
            m[edges[i][0]]++;
        }
        int max_val=0;
        int edge_val=-1;
        for(auto i:m){
            if(i.second>max_val) {
                max_val=i.second;
                edge_val=i.first;
            }
        }
        return edge_val;
    }
};