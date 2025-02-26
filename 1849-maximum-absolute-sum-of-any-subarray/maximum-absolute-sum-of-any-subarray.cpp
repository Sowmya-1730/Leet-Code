class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum=0,minSum=0,maxAbs=0;
        int curMax=0,curMin=0;

        for(int i:nums)
        {
            curMax=max(curMax+i,i);
            curMin=min(curMin+i,i);

            maxSum=max(maxSum,curMax);
            minSum=min(minSum,curMin);

            maxAbs=max(maxAbs,max(abs(maxSum),abs(minSum)));
        }
        return maxAbs;

    }
};