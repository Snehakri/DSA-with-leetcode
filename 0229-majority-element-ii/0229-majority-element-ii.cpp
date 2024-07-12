class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0;
        int ele1,ele2;
        for(int i=0;i<nums.size();i++){
            if(c1==0 && nums[i]!=ele2){
                c1=1;
                ele1=nums[i];
            }
            else if(c2==0 && nums[i]!=ele1){
                c2=1;
                ele2=nums[i];
            }
            else if(nums[i]==ele1) c1++;
            else if(nums[i]==ele2) c2++;
            else c1--,c2--;
        }
        //return {ele1,ele2};
        c1=0,c2=0;
    
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1) c1++;
            else if(nums[i]==ele2) c2++;
        }
        int n=nums.size()/3;
        cout<<n<<" "<<c1<<" "<<c2;
        if(c1>n && c2>n) return {ele1,ele2};
        else if(c1>n) return {ele1};
        else if(c2>n) return {ele2};
        return {};
    }
};