class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int count=0;
        sort(p.begin(),p.end());
        int i=0,j=p.size()-1;
        while(i<=j){
            if(p[i]+p[j]<=limit){
                i++;
            }
            j--;
            count++;
        }
        return count;
    }
};