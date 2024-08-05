class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> temp;
        for(int i=0;i<n;i++){
            int sum=nums[i];
            temp.push_back(sum);
            for(int j=i+1;j<n;j++){
                sum+=nums[j];
                temp.push_back(sum);
            }
        }
        sort(temp.begin(),temp.end());
        long long ans=0;
        for(int i=0;i<temp.size();i++){
             cout<<temp[i]<<" ";
        }
        for(int i=left-1;i<right;i++){
            // cout<<temp[i]<<" ";
            ans+=temp[i];
        }
        return ans%1'000'000'007;
        
    }
};
