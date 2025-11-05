class Solution {
public:

    set<pair<int,int>>main;
    set<pair<int,int>>sec;

    void insert_into_set(const pair<int,int>&p,long long &sum,int x)
    {
        if(main.size()<x || p>*main.begin())
        {
            sum+=1LL*p.first*p.second;
            main.insert(p);

            if(main.size()>x)
            {
                auto smallest=*main.begin();
                main.erase(smallest);
                sum-=1LL*smallest.first*smallest.second;
                sec.insert(smallest);
            }
        }
        else
        {
            sec.insert(p);
        }
    }

    void remove_from_set(const pair<int,int>&p,long long &sum,int x)
    {
        if(main.find(p)!=main.end())
        {
            sum-=1LL*p.first*p.second;
            main.erase(p);

            if(!sec.empty())
            {
                auto largest=*sec.rbegin();
                sec.erase(largest);
                main.insert(largest);
                sum+=1LL*largest.first*largest.second;
            }
        }
        else
        {
            sec.erase(p);
        }
    }

    vector<long long> findXSum(vector<int>& nums, int k, int x) {
        unordered_map<int,int>mp;
        int n=nums.size();
        long long sum=0;
        int l=0;
        int r=0;
        vector<long long>result;
        while(r<n)
        {
            if(mp[nums[r]]>0)
            {
                remove_from_set({mp[nums[r]],nums[r]},sum,x);
            }
            mp[nums[r]]++;
            insert_into_set({mp[nums[r]],nums[r]},sum,x);
            if(r-l+1==k)
            {
                result.push_back(sum);
                remove_from_set({mp[nums[l]],nums[l]},sum,x);
                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                {
                    mp.erase(nums[l]);
                }
                else
                {
                    insert_into_set({mp[nums[l]],nums[l]},sum,x);
                }
                l++;
            }
            r++;
        }
        return result;
    }
};