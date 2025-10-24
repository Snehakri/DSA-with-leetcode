class Solution {
    public int nextBeautifulNumber(int n) {
        while(!check(++n)){

        }
        return n;
    }
    public boolean check(int n){
        int arr[]=new int[10];
        while(n>0){
            if(n%10==0){
                return false;
            }
            ++arr[n%10];
            n/=10;
        }
        for(int i=0;i<10;i++){
            if(arr[i]>0 && arr[i]!=i){
                return false;
            }
        }
        return true;
    }
}