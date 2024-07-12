class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long nn=n;
        if(n<0)  nn=-nn;
       
        while(nn){
            if(nn%2==1){
                ans=ans*x;
                 nn-=1;
            }
            else{
                x*=x;
                nn=nn/2;
            }
             cout<<nn<<" "<<ans<<endl;
        }
        if(n<0) ans=1/ans;
        return ans;
        
    }
};