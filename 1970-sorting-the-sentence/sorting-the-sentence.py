class Solution:
    def sortSentence(self, s: str) -> str:
        l=s.split(" ")
        res=[""]*len(l)
        for i in range(0,len(l)):
            res[int(l[i][-1])-1]=l[i][:-1]
        return " ".join(res)