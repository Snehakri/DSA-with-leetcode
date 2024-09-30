class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int maxi=0;
        for(auto i:st){
            if(st.find(i-1)==st.end()){
                int count=1;
                int n=i;
                while(st.find(n+1)!=st.end()){
                    n+=1;
                    count++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};