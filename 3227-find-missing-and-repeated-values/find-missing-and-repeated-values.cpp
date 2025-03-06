class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        map<int,int>mp;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                mp[grid[i][j]]+=1;
            }
        }
        int i=1;
        int f=0;
        vector<int>ans(2);
        for(int i=1;i<=r*c;i++)
        {
            if(mp[i]==2)
            {
                ans[0]=i;
            }
            else if(mp[i]==0)
            {
                ans[1]=i;
            }
        }
        return ans;
    }
};