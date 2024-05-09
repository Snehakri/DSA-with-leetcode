class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        int i=happiness.size()-1,j=0;
        long long sum_h=0;
        while(k>0 && i>=0){
            if(happiness[i]-j<=0){ return sum_h;}
            sum_h+=(happiness[i]-j);
            j++;
            i--;
            k--;
        }
        return sum_h;
    }
};