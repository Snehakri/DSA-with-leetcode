class Solution {
public:
    long long maximumImportance(int j, vector<vector<int>>& roads) {
        map<int,int> m;
        for(int i=0;i<roads.size();i++){
            m[roads[i][0]]++;
            m[roads[i][1]]++;
        }
        vector<int> v;
        for(auto i:m){
            v.push_back(i.second);
        }
        sort(v.rbegin(),v.rend());
        long long sum=0;
        int n=j;
        for(int i=0;i<v.size();i++){
            if(n>0){
               sum+=(1LL*v[i]*n);
                n--;
            }
            // cout<<sum<<" ";
        }
        return sum;
    }
};