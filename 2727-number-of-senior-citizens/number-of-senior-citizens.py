class Solution:
    def countSeniors(self, details: List[str]) -> int:
        cnt=0
        for i in range(0,len(details)):
            age=int(details[i][11:13])
            if age>60:
                cnt+=1
        return cnt