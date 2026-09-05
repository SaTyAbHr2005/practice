class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        nums.sort()

        lcs = 1
        curr = 1

        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1]:
                continue
            elif nums[i] == nums[i-1] + 1:
                curr += 1
            else:
                lcs = max(lcs, curr)
                curr = 1
        res = max(lcs, curr)
        return res
        