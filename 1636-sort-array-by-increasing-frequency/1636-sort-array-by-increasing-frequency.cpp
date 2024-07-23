class Solution {
public:
    static bool cmp(const pair<int,int> &a,const pair<int,int> &b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second<b.second;
    } 
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> m;
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),cmp);
        
        vector<int> ans;
        for(auto it:v){
            for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};