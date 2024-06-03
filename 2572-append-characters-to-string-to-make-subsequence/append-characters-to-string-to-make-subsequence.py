class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        c=0
        i,j=0,0
        while(i<len(s) and j<len(t)):
            if s[i]==t[j]:
                c+=1
                i+=1
                j+=1
            else:
                i+=1
        res = len(t)-c
        return res