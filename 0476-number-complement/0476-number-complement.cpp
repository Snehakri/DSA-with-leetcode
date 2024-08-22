class Solution {
public:
    int findComplement(int num) {
        int n=num;
        long long two=1;
        int ans=0;
        while(n>0){
            int r=n%2;
            n=n/2;
            if(r==0) ans+=two;
            two*=2;
        }
        return ans;
    }
};