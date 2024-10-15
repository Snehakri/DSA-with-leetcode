class Solution {
public:
    long long minimumSteps(string s) {
        long long count=0;
        int n=s.size();
        int i=0,j=0;
        while(j<n && i<n){
            if(s[i]=='0'){
                count+=i-j;
                i++,j++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};