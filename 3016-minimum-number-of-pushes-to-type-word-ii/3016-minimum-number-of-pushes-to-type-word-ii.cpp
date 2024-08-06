class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
        vector<int> v(26,0);
        for(int i=0;i<word.size();i++){
            int n=word[i]-'a';
            v[n]++;
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<26;i++){
            cout<<v[i]<<" ";
            if(v[i]==0) break;
            count+=v[i]*(i/8+1);
        }
        return count;
    }
};