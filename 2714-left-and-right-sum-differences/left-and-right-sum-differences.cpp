class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(n,0);
        p[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]+nums[i];
        }
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                res.push_back(p[n-1]-p[i]);
            }
            else if(i==n-1)
            {
                res.push_back(p[i-1]);
            }
            else
            {
                int l=p[i-1];
                int r=p[n-1]-p[i];
                res.push_back(abs(l-r));
            }
        }
        return res;
    }
};