class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        product = defaultdict(int)
        pair = defaultdict(int)
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                p = nums[i]*nums[j]
                pair[p]+=product[p]
                product[p]+=1
        res=0
        for cnt in pair.values():
            res+=cnt*8
        return res