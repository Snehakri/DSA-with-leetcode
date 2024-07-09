class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mini=a[0];
        int profit=0;
        for(int i=0;i<a.size();i++){
            mini=min(a[i],mini);
            int p=a[i]-mini;
            profit=max(profit,p);
        }
        return profit;
    }
};