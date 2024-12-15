#include <queue>
#include <vector>
#include <utility> // For std::pair

using pdi = pair<double, int>;
class Solution {
public:
    void heapPush(priority_queue<pdi>& pq,vector<vector<int>>& classes,int i){
        double curr_avg=(double) classes[i][0]/classes[i][1];
        double new_avg=((double) classes[i][0]+1)/(classes[i][1]+1);
        double possible_incre=new_avg-curr_avg;
        pq.push(make_pair(possible_incre,i));
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        
        priority_queue <pdi> pq;
        for(int i=0;i<n;i++){
            heapPush(pq,classes,i);
        }
        while(extraStudents--){
            pdi curr=pq.top();
            pq.pop();
            int ind=curr.second;
            classes[ind][0]++;
            classes[ind][1]++;
            heapPush(pq,classes,ind);
        }
        double final_avg=0.0;
        int total_students=0;
        for(int i=0;i<n;i++){
            final_avg+=(double)classes[i][0]/classes[i][1];
        }
        return final_avg/n;
    }
};