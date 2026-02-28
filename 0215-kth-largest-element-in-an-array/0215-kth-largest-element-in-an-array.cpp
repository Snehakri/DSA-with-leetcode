class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto i:nums){
            pq.push(i);
        }
        int tp=0;
    
        while(!pq.empty() &&  k>0){
            tp=pq.top();
            pq.pop();
            k--;
        }
        return tp;
    }
};