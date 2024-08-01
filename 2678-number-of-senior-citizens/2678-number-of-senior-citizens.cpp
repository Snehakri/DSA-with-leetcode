class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            int n=details[i][11]-'0';
            //cout<<n<<endl;
            if(n==6){
                int a=details[i][12]-'0';
                if(a>=1){
                    count++;
                }
            }
            if(n>6){
                count++;
            }
        }
        return count;
    }
};