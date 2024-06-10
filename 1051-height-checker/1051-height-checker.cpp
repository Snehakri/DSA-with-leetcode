class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted;
        for(int i=0;i<heights.size();i++){
            sorted.push_back(heights[i]);
        }
        sort(sorted.begin(),sorted.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=sorted[i]) count++;
        }
        return count;
    }
};