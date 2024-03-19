class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       map<char,int> m;
        for(char c:tasks) m[c]++;
        priority_queue<int> pq;
        for(auto i:m){
            pq.push(i.second);
        }
        int ans=0;
        while(!pq.empty()){
            int time=0;
            vector<int> v;
            for(int i=0;i<=n;i++){
                if(!pq.empty()){
                    v.push_back(pq.top()-1);
                    pq.pop();
                    time++;
                }
            }
            for(auto i:v){
                if(i) pq.push(i);
            }
            if(pq.empty()) ans+=time;
            else ans+=n+1;
        }
        return ans;
    }
};