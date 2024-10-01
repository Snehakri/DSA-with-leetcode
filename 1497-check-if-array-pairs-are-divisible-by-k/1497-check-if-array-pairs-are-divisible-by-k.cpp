class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            int rem=((arr[i]%k)+k)%k;
            m[rem]++;
        }
        cout<<m[0];
        if(m[0]%2!=0) return false;
        
        for(int i=1;i<=k/2;i++){
            int cmp=k-i;
            if(m[i]!=m[cmp]) return false;
        }
        return true;
    }
};