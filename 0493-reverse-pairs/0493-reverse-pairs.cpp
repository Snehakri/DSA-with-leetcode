// class Solution {
// public:
//     int reversePairs(vector<int>& nums) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]>nums[j]*2) count++;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    void merge(vector<int>&nums ,int l,int m,int h){
        vector<int> temp;
        int left=l;
        int right=m+1;
        while(left<=m && right<=h){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                // if((1LL*nums[right]*2) < nums[left]){
                //     count+=(m-left+1);
                // } 
                right++;
            }
        }
        while(left<=m){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=h){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=l;i<=h;i++){
            nums[i]=temp[i-l];
        }
    }
//     int countPairs(vector<int> &arr, int low, int mid, int high) {
//     int right = mid + 1;
//     int cnt = 0;
//     for (int i = low; i <= mid; i++) {
//         while (right <= high && arr[i] > 2 * arr[right]) right++;
//         cnt += (right - (mid + 1));
//     }
//     return cnt;
// }
    int countPairs(vector<int> &nums,int l,int m,int h){
        int right=m+1;
        int count=0;
        for(int i=l;i<=m;i++){
            while(right<=h && (1LL*nums[right]*2 < nums[i]) ){
                right++;
            }
             count+=(right-(m+1));
        }
        return count;
    }
    int mergesort(vector<int>&nums,int l,int h){
        int count=0;
        if(l>=h) return count;
        int mid=(l+h)/2;
        count+=mergesort(nums,l,mid);
        count+=mergesort(nums,mid+1,h);
        count+=countPairs(nums,l,mid,h);
        merge(nums,l,mid,h);
        return count;
        
    }
    int reversePairs(vector<int>& nums) {
       return mergesort(nums,0,nums.size()-1);
    }

};