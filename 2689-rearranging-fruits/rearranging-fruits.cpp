class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>ump;
        for(int i:basket1)ump[i]++;
        for(int i:basket2)ump[i]--;
        vector<int>from1,from2;
        for(auto& [fruit,count]: ump)
        {
            if(count%2!=0)return -1;
            int half=abs(count)/2;
            if(count>0)for(int i=0;i<half;i++)from1.push_back(fruit);
            if(count<0)for(int i=0;i<half;i++)from2.push_back(fruit);
        }
        if(from1.empty())return 0;
        sort(from1.begin(),from1.end());
        sort(from2.rbegin(),from2.rend());
        int min_val = min(*min_element(basket1.begin(),basket1.end()),*min_element(basket2.begin(),basket2.end()));
        
        long long int cost=0;
        for(long long int i=0;i<from1.size();i++)
        {
            cost+=min(2LL*min_val,1LL*min(from1[i],from2[i]));
        }
        
        return cost;
    }
};