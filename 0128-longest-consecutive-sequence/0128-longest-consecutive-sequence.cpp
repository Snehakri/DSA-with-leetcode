class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int maxi=1;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==0) continue;
            else if(nums[i]-nums[i-1]==1){
                count++;
                maxi=max(maxi,count);
            }
            else count=1;
        }
        
        // unordered_set<int> st;
        // for(int i=0;i<nums.size();i++){
        //     st.insert(nums[i]);
        // }
        // for(auto i:st){
        //     if(st.find(i-1)==st.end()){
        //         int count=1;
        //         int n=i;
        //         while(st.find(n+1)!=st.end()){
        //             n+=1;
        //             count++;
        //         }
        //         maxi=max(maxi,count);
        //     }
        // }
        return maxi;
    }
};