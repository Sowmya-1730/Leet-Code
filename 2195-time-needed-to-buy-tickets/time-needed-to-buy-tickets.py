class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        time = 0
        while True:
            flag = True
            for i in range(len(tickets)):
                if tickets[i]!=0:
                    tickets[i]-=1
                    time+=1
                if tickets[k]==0:
                    flag=False
                    break
            if flag==False:
                break
        return time