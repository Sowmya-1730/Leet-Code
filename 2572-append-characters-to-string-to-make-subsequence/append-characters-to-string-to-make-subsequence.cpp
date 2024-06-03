class Solution {
public:
    int appendCharacters(string s, string t) {
        int cnt=0;
        int i=0,j=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j])
            {
                cnt+=1;
                i+=1;
                j+=1;
            }
            else
            {
                i+=1;
            }
        }
        int res=t.size()-cnt;
        return res;
    }
};