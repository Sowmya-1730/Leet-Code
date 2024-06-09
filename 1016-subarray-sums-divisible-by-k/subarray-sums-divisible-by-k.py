class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        d={}
        c=0
        s=0
        for i in nums:
            s+=i
            rem=s%k
            if rem not in d:
                d[rem]=1
            else:
                c+=d[rem]
                d[rem]+=1
            if rem==0:
                c+=1
        return c