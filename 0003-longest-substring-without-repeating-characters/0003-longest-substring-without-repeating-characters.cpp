class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int count=0;
        int maxi=0;
        int i=0,j=0;
        while(i<=j && j<s.size()){
            if(m.find(s[j])!=m.end()){
                    i=max(m[s[j]]+1,i);
            }
            m[s[j]]=j;
            count=j-i+1;
            j++;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};