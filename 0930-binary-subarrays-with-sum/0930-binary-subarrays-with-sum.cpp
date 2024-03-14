class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        map<int,int> m;
        int ps=0;
        int count=0;
        for(int i=0;i<n;i++){
            ps+=nums[i];
            if(ps==goal) count++;
            if(m.find(ps-goal)!=m.end()) count+=m[ps-goal];
            m[ps]++;
        }
        return count;
        
//         vector<int> pre_sum(n,0);
//         int i=0,j=0;
//         int count=0;
//         int ps=0;
//         ps+=nums[0];
//         pre_sum[0]=ps;
//         while(i<=j && j<n && i<n){
//             // ps+=nums[j];
//             // pre_sum[j]=ps;
//             if(pre_sum[j]==goal){
//                 count++;
//                 j++;
//                 ps+=nums[j];
//                 pre_sum[j]=ps;
//             }
//             else if(pre_sum[j]>goal){
//                 pre_sum[j]-=nums[i];
//                 ps-=nums[i];
//                 // j--;
//                 i++;
//             }
//             else{
//                 if(n>0){
//                     j++;
//                     ps+=nums[j];
//                     pre_sum[j]=ps;
//                 }
//             } 
            
//         }
//         return count;
        
    }
};