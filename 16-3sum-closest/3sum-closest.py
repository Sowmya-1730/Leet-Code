class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:

        nums.sort()

        close = nums[0] + nums[1] + nums[2]

        for i in range(0, len(nums) - 2):

            j, k = i + 1, len(nums) - 1

            while j < k:

                check = nums[i] + nums[j] + nums[k]

                if abs(target - check) < abs(target - close):

                    close = check

                if check == target:
                    return check

                elif check < target:
                    j += 1
                
                else:
                    k -= 1

        return close

