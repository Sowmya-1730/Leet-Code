class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        vector<int>res;
        int zero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)res.push_back(nums[i]);
            else zero+=1;
        }
        while(zero!=0)
        {
            res.push_back(0);
            zero-=1;
        }
        return res;

    }
};