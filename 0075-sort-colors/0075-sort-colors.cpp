class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        nums.clear();
        for(auto  i:m){
            for(int j=0;j<i.second;j++){
                nums.push_back(i.first);
            }
        }
    }
};