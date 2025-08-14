class Solution {
public:
    string largestGoodInteger(string num) {
        string s="";
       for(int i=1;i<num.size()-1;i++){
          if(num[i+1]==num[i] && num[i]==num[i-1]){
            if(s.empty() ){
                s += string(3, num[i]);
            }
            else if(num[i]-'0'>s[0]-'0'){
                s="";
                s += string(3, num[i]);
            }
          }
       }
       return s;
    }
};