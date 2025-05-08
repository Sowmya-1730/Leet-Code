class Solution {
public:
    vector<int> evenOddBit(int n) {
        int cnt=0;
        vector<int>result;
        int even=0,odd=0;
        while(n>0)
        {
            if((n&1)==1)
            {
                if(cnt%2==0)even+=1;
                else odd+=1;
                cnt+=1;
            }
            else cnt+=1;
            n=n>>1;
        
        }
        result.push_back(even);
        result.push_back(odd);
        return result;
    }
};