class Solution {
public:
    long long coloredCells(int n) {
        long long i=4;
        long long ans=1;
        while(n>1){
            ans+=i;
            i+=4;
            n--;
        }
        return ans;
    }
};