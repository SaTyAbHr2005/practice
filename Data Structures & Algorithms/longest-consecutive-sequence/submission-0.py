class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        store = set(nums)
        res = 0
        
        for i in nums:
            lcs, curr = 0, i
            while i in store:
                lcs += 1
                i += 1
            res = max(res, lcs)
        return res