class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int count=0;
        int ind1=(n+m)/2;
        int ind2=ind1-1;
        int i=0,j=0;
        int val1,val2;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                if(count==ind1) val1=nums1[i];
                if(count==ind2) val2=nums1[i];
                i++;
                count++;
            }
            else{
                 if(count==ind1) val1=nums2[j];
                if(count==ind2) val2=nums2[j];
                j++;
                count++;
            }
        }
        while(i<n){
            if(count==ind1) val1=nums1[i];
            if(count==ind2) val2=nums1[i];
            i++;
            count++;
        }
        while(j<m){
            if(count==ind1) val1=nums2[j];
            if(count==ind2) val2=nums2[j];
            j++;
            count++;
        }
        cout<<n+m<<" "<<val1<<" "<<val2;
        if((n+m)%2==1){
            return val1;
        }
        double med=(val1+val2)/2.0;
        return med;
    }
};