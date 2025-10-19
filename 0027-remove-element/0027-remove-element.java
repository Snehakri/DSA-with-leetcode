class Solution {
    public int removeElement(int[] nums, int val) {
        if(nums.length<1) return 0;
        if(nums.length==1 && nums[0]!=val){
            return 1;
        }
        int i=0,j=1;
        while(j<nums.length){
            if(nums[i]==val ){
                if(nums[j]==val){
                    j++;
                }
                else {
                    nums[i]=nums[j];
                    nums[j]=val;
                    i++;
                    j++;
                }
               
            }
            else{i++;
            j++;}

        }
        if(nums[i]==val){
            return i;
        }
        return i+1;
    }

}