class Solution {
public:
    bool checkValidString(string s) {
        stack <int> st;
        stack <int> star;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]=='*') star.push(i);
            else{
                if(!st.empty()){
                    st.pop();
                }
                else if(!star.empty()){
                    star.pop();
                }
                else return false;
            }
        }
        while(!st.empty()){
            if(star.empty()) return false;
            else if(st.top()>star.top()) return false;
            else{
                st.pop(),star.pop();
            }
        }
        return true;
    }
};