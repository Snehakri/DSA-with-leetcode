class Solution {
public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        // if(a.second==b.second){
        //     return 
        // }
        return a.second<b.second;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> v;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            if(n==0){
                v.push_back({nums[i],mapping[0]});
                continue;
            }
            int m=0;
            int j=0;
            while(n>0){
                int r=n%10;
                n/=10;
                m=mapping[r]*pow(10,j)+m;
                j++;
            }
            v.push_back({nums[i],m});  
        }
        sort(v.begin(),v.end(),cmp);
        for(auto it:v){
            ans.push_back(it.first);
        }
        return ans;
    }
};