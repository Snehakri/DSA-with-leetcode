class Solution {
public:
    int minimumDeletions(string s) {
        int ans=INT_MAX;
        int n=s.size();
        // int acount[n]={0};
        // int bcount[n]={0};
        vector<int> acount(n,0);
        vector<int> bcount(n,0);
        int bsum=0;
        int asum=0;
        for(int i=0;i<n;i++){
            bcount[i]=bsum;
            if(s[i]=='b') bsum+=1;
        }
        for(int i=n-1;i>=0;i--){
            acount[i]=asum;
            if(s[i]=='a') asum+=1;
            
        }
        for(int i=0;i<n;i++){
            int sum=acount[i]+bcount[i];
            ans=min(ans,sum);
        }
        return ans;
    }
};