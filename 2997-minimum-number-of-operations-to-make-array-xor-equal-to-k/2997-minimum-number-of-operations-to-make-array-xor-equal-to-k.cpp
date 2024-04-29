class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int finalxor=0;
        for(int i=0;i<nums.size();i++){
            finalxor^=nums[i];
        }
        // int count=0;
        // while(k>0 || finalxor>0){
        //     int r=k%2;
        //     k/=2;
        //     int rx=finalxor%2;
        //     finalxor/=2;
        //     if(r!=rx) count++;
        // }
        // return count;
        return __builtin_popcount(k ^ finalxor);
    }
};