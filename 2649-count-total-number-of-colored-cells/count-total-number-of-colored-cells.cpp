class Solution {
public:
    long long coloredCells(int n) {

        long long count;
        for(int i=n-1;i>=0;i--)
        {
            if(i==0)count+=1;
            else count+=(i*4);
        }
        return count;
    }
};