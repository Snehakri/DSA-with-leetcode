class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int nearestVal=-1;
        int minDif=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int r=nums.size()-1;
            int l=i+1;
            int sum=0;
            while(r>l){
                sum=nums[l]+nums[r]+nums[i];
                if(sum==target){
                    return sum;
                }
                if(sum>target){
                    r--;
                }
                else l++;
                

                if(abs(target-sum)<minDif){
                minDif=abs(target-sum);
                nearestVal=sum;
                cout<<nearestVal<<" "<<minDif;
                }   
            }
        }
        return nearestVal;
    }
};