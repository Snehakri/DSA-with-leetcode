class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int num[nums.size()];
        for(int i=0;i<nums.size();i++){
            int ind=(i+k)%nums.size();
            num[ind]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=num[i];
        }

    }
};