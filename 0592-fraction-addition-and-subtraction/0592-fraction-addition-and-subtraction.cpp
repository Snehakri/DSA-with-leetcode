class Solution {
public:
    string fractionAddition(string exp) {
        int nume=0;
        int deno=1;
        int i=0;
        int n=exp.size();
        while(i<n){
            int new_n=0;
            int new_d=0;
            bool isneg=(exp[i]=='-');
            if(exp[i]=='+' || exp[i]=='-') i++;
            
            while(i<n && exp[i]!='/'){
                
                new_n=new_n*10+(exp[i]-'0');
                i++;
            }
            i++;
            if(isneg) new_n*=-1;
            while(i<n && isdigit(exp[i])){
                new_d=new_d*10+(exp[i]-'0');
                i++;
            }
            nume=nume*new_d+new_n*deno;
            deno=deno*new_d;
        }
        int GCD=abs(__gcd(nume,deno));
        nume/=GCD;
        deno/=GCD;
        cout<<nume<<" "<<deno<<endl;
        return to_string(nume)+"/"+to_string(deno);
    }
};