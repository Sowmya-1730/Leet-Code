class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<=2)return 0;
        map<char,int>mp;
        int i=0,cnt=0,j=0;
        while(i<=s.size()-3)
        {
            mp[s[j]]+=1;
            if(j-i+1 == 3)
            {
                if(mp.size()==3)cnt+=1;
                mp[s[i]]-=1;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i+=1;
            }
            j+=1;
        }
        return cnt;
    }
};