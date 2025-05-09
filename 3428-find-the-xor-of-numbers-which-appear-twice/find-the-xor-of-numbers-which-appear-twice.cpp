class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]+=1;
        }
        vector<int>v;
        for(auto it:mp)
        {
            if(it.second==2)
            {
                v.push_back(it.first);
            }
        }
        if(v.size()==0)return 0;
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            res=res^v[i];
        }
        return res;
    }
};