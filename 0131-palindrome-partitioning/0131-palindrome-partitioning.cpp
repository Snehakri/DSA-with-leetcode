class Solution {
 public:
    bool ispalindrome(int i,int j,string s){
        while(i<=j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    void solve(int it,vector<string> temp,string s,vector<vector<string>> &ans){
        if(it==s.size()) {
            ans.push_back(temp);
            return ;
        }
        for(int i=it;i<s.size();i++){
            if(ispalindrome(it,i,s)){
                temp.push_back(s.substr(it,i-it+1));
                solve(i+1,temp,s,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        solve(0,temp,s,ans);
        return ans;
    
    }
};