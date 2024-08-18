class StockSpanner {
public:
    stack<pair<int,int>> st;
    int index=-1;
    StockSpanner() {
    }
    
    int next(int price) {
        index++;
        int ans;
        while(!st.empty() && price>=st.top().first){
            st.pop();
        }
        if(st.empty()) ans=index-(-1);
        else ans=index-st.top().second;
        st.push({price,index});
        return ans;
    }
};  
