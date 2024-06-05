class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        fst=words[0]
        if len(words)==1:
            l=[]
            for i in fst:
                if i not in l:
                    l.append(i)
            return l
        else:
            lst=[]
            d={}
            for i in fst:
                if i not in d:
                    d[i]=1
                else:
                    d[i]+=1
            print(d)
            for i in d:
                flag=0
                l=[]
                l.append(d[i])
                for j in range(1,len(words)):
                    if i in words[j]:
                        l.append(words[j].count(i))
                        f=1
                    else:
                        f=0
                        break
                if f==1:
                    m=min(l)
                    for k in range(0,m):
                        lst.append(i)
            return lst
                