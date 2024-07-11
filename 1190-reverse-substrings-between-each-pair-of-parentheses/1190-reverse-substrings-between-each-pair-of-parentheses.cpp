class Solution {
public:
    string reverseParentheses(string s) {
        string ans;
        stack<int> stack;
        map<int,int> pair;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') stack.push(i);
            else if(s[i]==')'){
                const int j=stack.top();
                stack.pop();
                pair[j]=i;
                pair[i]=j;
            }
        }
        for(int i=0,d=1;i<s.size();i+=d){
            if( s[i]=='(' || s[i]==')' ){
                i=pair[i];
                d=-d;
            }
            else ans+=s[i];
        }
        return ans;
    }
};

//     for (int i = 0, d = 1; i < s.length(); i += d)
//       if (s[i] == '(' || s[i] == ')') {
//         i = pair[i];
//         d = -d;
//       } else {
//         ans += s[i];
//       }

//     return ans;
//   }
// };