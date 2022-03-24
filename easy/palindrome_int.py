class Solution:
    def isPalindrome(self, x: int) -> bool:
        temp = str(x)
        i = 0
        j = len(temp)-1
        while temp[i] == temp[j]:
            i += 1
            j -= 1
            if i >= j:
                return True
        return False

solution = Solution()
print("121 expected True, actual", solution.isPalindrome(121))
print("121 expected True, actual", solution.isPalindrome(11))