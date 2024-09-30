class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
     
        int n=arr.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=arr[i];
        }
        sort(arr.begin(),arr.end());
        int count=1;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            while(i<n-1 && arr[i]==arr[i+1]){
              i++;  
            } 
            mp[arr[i]]=count++;
        }
        for(int i=0;i<n;i++){
            v[i]=mp[v[i]];
        }
        return v;
        
        
    }
};