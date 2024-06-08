class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        m={0:-1}
        pfx=0
        for i in range(0,len(nums)):
            pfx+=nums[i]
            rm=pfx%k
            if rm in m:
                if i-m[rm]>1:
                    return True
            else:
                m[rm]=i
        return False