class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        num_count = dict(nums)
        for n in nums:
            num_count[n] += 1
            if num_count[n] > 1:
                return True
        return False