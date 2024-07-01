class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3)
        {
            return false;
        }
        int i=0,j=0;
        int cnt=0;
        while(i<arr.size()-2)
        {
            if(cnt==3)return true;
            if(j==arr.size())
            {
                i+=1;
                j=i+1;
                cnt=0;
            }
            else
            {
                if(arr[j]%2!=0)
                {
                    cnt++;
                }
                else
                {
                    cnt=0;
                }
                j++;
            } 
        }
        return false;
    }
};