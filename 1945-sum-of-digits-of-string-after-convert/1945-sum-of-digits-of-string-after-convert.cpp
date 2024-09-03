class Solution {
public:
    int getLucky(string s, int k) {
        int sum;
        while(k--){
            sum=0;
            for(int i=0;i<s.size();i++){
                int num;
                if(s[i]>=48 && s[i]<=57) {
                    num=s[i]-'0';
                }
                else num=s[i]-'a'+1; 
                //cout<<num;
                while(num){
                    sum+=num%10;
                    num=num/10;
                }
            }
            //cout<<endl<<sum<<endl;
            string t;
            int tsum=sum;
            while(tsum){
                int r=tsum%10;
                tsum=tsum/10;
                t=to_string(r)+t;
            }
            s=t;
        }
        return sum;
    }
};