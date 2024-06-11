class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v(1001,0);
        vector<int> ans;
        for(int i=0;i<arr1.size();i++){
            v[arr1[i]]+=1;
        }
        // for(int i=0;i<20;i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<v[arr2[i]];j++){
                ans.push_back(arr2[i]);
            }
            v[arr2[i]]=0;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                for(int j=0;j<v[i];j++){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};