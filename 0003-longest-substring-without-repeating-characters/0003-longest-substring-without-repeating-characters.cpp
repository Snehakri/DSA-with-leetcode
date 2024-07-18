class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        unordered_map<char,int> m;
        int count=0;
        int maxi=1;
        int i=0,j=0;
        while(i<=j && j<s.size()){
            if(m.find(s[j])!=m.end()){
                //cout<<"uj";
                while(i<j && m.find(s[j])!=m.end()){
                    m.erase(s[i]);
                    i++;
                }
            }
            m[s[j]]++;
            count=j-i+1;
            // j++;
            //cout<<i<<"=i, count in "<<j<<"is:"<<count<<endl;
            j++;
            maxi=max(maxi,count);
        }
        // for(auto it:m){
        //     cout<<it.first<<" ";
        // }
        return maxi;
    }
};