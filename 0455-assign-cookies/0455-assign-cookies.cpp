class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int j=0,i=0;
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(j<g.size() && i<s.size()){
            if(g[j]<=s[i]){
                count++;
                i++;
                j++;
            }
            else i++;
        }
        return count;
    }
};