class Solution {
    public int totalMoney(int n) {
        int sum=0;
        int week=n/7;
        int rem=n%7;
        int start=week+1;
        while(rem>0){
                sum+=start;
                rem--;
                start++;
        }
        sum += 28 * week + (7 * week * (week - 1)) / 2; 
        return sum;

    }
}