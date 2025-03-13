class Solution {
public:
    int process(vector<int>& nums,int n)
    {
        int prev=n;
        int f=0;
        for(int i=0;i<nums.size();i++)
        {
            prev=prev+nums[i];
            if(prev<1)
            {
                f=1;
                break;
            }
        }
        return f;
    }
    int minStartValue(vector<int>& nums) {
        int n=1;
        while(true)
        {
            int f=process(nums,n);
            if(f==1)
            {
                n+=1;
            }
            else
            {
                break;
            }
        }
        return n;

    }
};