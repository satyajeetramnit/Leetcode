class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        # return (sum(nums)-sum(set(nums)))//(len(nums)-len(set(nums)))
        slow,fast=0,0
        while True:
            slow=nums[slow]
            fast=nums[nums[fast]]
            if fast==slow:
                break
        idx=0
        while True:
            slow=nums[slow]
            idx=nums[idx]
            if slow==idx:
                return slow
        return -1