class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        int fst=0;
        int sec=1;
        int thrd=1;
        for(int i=2;i<n;i++){
            int sum=fst+sec+thrd;
            fst=sec;
            sec=thrd;
            thrd=sum;
        }
        return thrd;
    }
};