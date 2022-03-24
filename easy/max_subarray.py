class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        current = 0
        max_sum = float('-inf')
        for n in nums:
            if current < 0:
                current = 0
            current += n
            max_sum = max(current, max_sum)
        return max_sum

soln = Solution()
print("max subarray sum of [-2, 1, -3, 4, -1, 2, 1, -5, -4] expected 6, actual", soln.maxSubArray([-1, 1, -3, 4, -1, 2, 1, -5, -4]))