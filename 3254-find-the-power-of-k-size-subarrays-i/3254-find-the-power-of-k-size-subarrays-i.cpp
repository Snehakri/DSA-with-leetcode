class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
       vector<int> ans;
       
        for(int j=0;j<=nums.size()-k;j++){
             bool is_sorted=true;
            for(int i=j;i<k+j-1;i++){
                if(nums[i+1]-1!=nums[i]){
                    ans.push_back(-1);
                    is_sorted=false;
                    break;
                }
            }
            if(is_sorted) ans.push_back(nums[k+j-1]);
        }
        return ans;
    }
};