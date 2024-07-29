class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int count=0;
        for(int mid=1;mid<n-1;mid++){
            int leftsmaller=0;
            for(int i=0;i<mid;i++){
                if(rating[i]<rating[mid]){
                    leftsmaller++;
                }
            }
            int rightgreater=0;
            for(int i=mid+1;i<n;i++){
                if(rating[i]>rating[mid]){
                   rightgreater++;
                }
            }
            int leftgreater=mid-leftsmaller;
            int rightsmaller=n-mid-1-rightgreater;
            //cout<<leftgreater<<rightsmaller<<" and"<<leftsmaller<<rightgreater<<endl;
            count+=(leftgreater*rightsmaller);
            count+=(leftsmaller*rightgreater);
            //cout<<count<<endl;
            
        }
        return count;
    }
};