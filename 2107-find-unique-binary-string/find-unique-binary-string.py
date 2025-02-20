class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        if len(nums)==1 and nums[0]=="1": return "0"
        if len(nums)==1 and nums[0]=="0": return "1"
        l=[]
        for i in nums:
            l.append(int(i,2))
        n=len(nums)
        val=bin(0)[2:].zfill(n)
        value=int(val)
        while True:
            r=bin(value)[2:].zfill(n)
            if value not in l:
                return r
            value+=1
        return ""