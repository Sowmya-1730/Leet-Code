class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lesser;
        vector<int>equal;
        vector<int>greater;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                lesser.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                equal.push_back(nums[i]);
            }
            else
            {
                greater.push_back(nums[i]);
            }
        }
        vector<int>result;
        for(int i=0;i<lesser.size();i++)
        {
            result.push_back(lesser[i]);
        }
        for(int j=0;j<equal.size();j++)
        {
            result.push_back(equal[j]);
        }
        for(int k=0;k<greater.size();k++)
        {
            result.push_back(greater[k]);
        }
        return result;
    }
};