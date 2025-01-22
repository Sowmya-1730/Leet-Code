class Solution:
    def maximum69Number (self, num: int) -> int:
        s = str(num)
        l=[]
        f=0
        for i in range(0,len(s)):
            if s[i]=="6" and f==0:
                l.append("9")
                f=1
            else:
                l.append(s[i])
        res = int(''.join(l))
        return res