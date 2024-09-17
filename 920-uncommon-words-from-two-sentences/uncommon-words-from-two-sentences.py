class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        l1=s1.split(" ")
        l2=s2.split(" ")
        res=[]
        for i in l1:
            if l1.count(i)==1 and l2.count(i)==0:
                res.append(i)
        for i in l2:
            if l2.count(i)==1 and l1.count(i)==0:
                res.append(i)
        return res