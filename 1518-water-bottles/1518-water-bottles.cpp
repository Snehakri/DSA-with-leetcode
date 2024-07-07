class Solution {
public:
    int numWaterBottles(int nB, int nE) {
        int ans=nB;
        while(nB>=nE){
            int n=nB/nE;
            ans+=n;
            int r=nB%nE;
            nB=n+r;
        }
        return ans;
    }
};