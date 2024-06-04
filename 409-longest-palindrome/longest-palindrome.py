class Solution:
    def longestPalindrome(self, s: str) -> int:
        if len(s)==1:
            return 1
        elif s==s[::-1]:
            return len(s)
        else:
            d={}
            for i in s:
                if i not in d:
                    d[i]=1
                else:
                    d[i]+=1
            sm=0
            f=0
            odd=0
            for i in d:
                if d[i]%2==0:
                    sm+=d[i]
                # elif d[i]==1 and f==0:
                #     sm+=d[i]
                #     f=1
                #     odd=1
                # elif d[i]==1 and f==1:
                #     continue
                #     odd=1
                # else:
                #     sm+=d[i]-1
                #     odd=1
                else:
                    odd=1
                    if d[i]==1 and f==0:
                        sm+=d[i]
                        f=1
                    elif d[i]==1 and f==1:
                        continue
                    else:
                        sm+=d[i]-1
            if f==0 and odd==1: 
                sm+=1
            print(d)
            return sm