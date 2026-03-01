// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char,int> m;
//         int count=0;
//         int maxi=0;
//         int i=0,j=0;
//         while(i<=j && j<s.size()){
//             if(m.find(s[j])!=m.end()){
//                     i=max(m[s[j]]+1,i);
//             }
//             m[s[j]]=j;
//             count=j-i+1;
//             j++;
//             maxi=max(maxi,count);
//         }
//         return maxi;
//     }
// };

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int ans=0;
        int count=0;
        int last=0;

        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                last=max(mp[s[i]]+1,last);
            }
            mp[s[i]]=i;
            count=i-last+1;
            ans=max(count,ans);
            
        }
        return ans;
    }
    
};