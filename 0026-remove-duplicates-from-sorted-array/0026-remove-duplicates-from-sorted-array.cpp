class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int n=st.size();
        int j=0;
        for(auto it:st){
            nums[j++]=it;
        }
        return n;
    }
};