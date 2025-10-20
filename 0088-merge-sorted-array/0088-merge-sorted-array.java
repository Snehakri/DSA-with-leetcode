class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] arr=new int[m];
        for(int i=0;i<m;i++){
            arr[i]=nums1[i];
        }
        
        int i=0,j=0,c=0;
        while(i<m && j<n){
            if(arr[i]<nums2[j]){
                nums1[c]=arr[i];
                c++;
                i++;
            }
            else{
                nums1[c]=nums2[j];
                c++;
                j++;
            }
        }
        while(j<n){
           nums1[c]=nums2[j];
                c++;
                j++;
        }
        while(i<m){
            nums1[c]=arr[i];
                c++;
                i++;
        }
    }
}