class Solution {
public:
    string minWindow(string s, string t) {
        int arr[128];
        int mostLeft=-1;
        int required=t.size();
        int minLength=s.size()+1;
        for(auto i:t){
            arr[i]++;
        }
        for(int l=0,r=0;r<s.size();r++){
            if(--arr[s[r]]>=0){
                required--;
            }
            while(required==0){
                if(minLength>(r-l+1)){
                    minLength=(r-l+1);
                    mostLeft=l;
                }
                if(++arr[s[l++]]>0) required++;
            }
        }

        if(mostLeft!=-1) return s.substr(mostLeft,minLength);
        return "";

    }
};