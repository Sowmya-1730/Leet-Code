class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        lst=[]
        for i in heights:
            lst.append(i)
        lst.sort()
        cnt=0
        for i in range(0,len(heights)):
            if heights[i]!=lst[i]:
                cnt+=1
        return cnt