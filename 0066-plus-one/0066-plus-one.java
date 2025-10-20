class Solution {
    public int[] plusOne(int[] digits) {
        int carry=1;
        ArrayList<Integer> arr=new ArrayList<>(digits.length);
        for(int i=digits.length-1;i>=0;i--){
            int n=digits[i]+carry;
            carry=n/10;
            arr.add(0,n%10);
        }
        if(carry==1){
            arr.add(0,1);
        }
         int[] result = new int[arr.size()];
        for (int i = 0; i < arr.size(); i++) {
            result[i] = arr.get(i);
        }
        
        return result;
    }
}