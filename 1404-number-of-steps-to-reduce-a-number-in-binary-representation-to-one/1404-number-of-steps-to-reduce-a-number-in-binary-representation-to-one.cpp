// class Solution {
// public:
//     int numSteps(string s) {
//         long long num=0;
//         long long m=1;
//         for(int i=s.size()-1;i>=0;i--){
//             int n=s[i]-'0';
//             num+=(n*m);
//             m*=2;
//         }
//         int count=0;
//         while(num>1){
//             if(num%2==0) num=num/2;
//             else num+=1;
//             count++;
//         }
//         return count;
//     }
// };
class Solution {
public:
    int numSteps(string s) {
        int count=0;
        while(s.size()>1){
            if(s[s.size()-1]=='0'){
                s.pop_back();
                count++;
                continue;
            }
            bool zeropresent=false;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='0'){
                    s[i]='1';
                    zeropresent=true;
                    break;
                }
                else s[i]='0';
            }
            if(!zeropresent) s='1'+s;
            count++;
        }
         return count;         
    }
};