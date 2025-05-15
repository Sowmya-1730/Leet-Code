class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string sNum=to_string(num);
        int cnt=0;
        for(int i=0;i<=sNum.size()-k;++i)
        {
            string sub=sNum.substr(i,k);
            int nSub=stoi(sub);
            if(nSub!=0 && num%nSub==0)cnt+=1;
        }
        return cnt;
    }
};