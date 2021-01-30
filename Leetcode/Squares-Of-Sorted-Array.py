# O(n) solution using two pointer approach.
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        answer_list = [0]*len(nums)
        left, right = 0, len(nums) - 1
        write = len(nums) - 1
        left_square, right_square = nums[left]**2, nums[right]**2
        while write >= 0:
            if left_square > right_square:
                answer_list[write] = left_square
                left += 1
                left_square = nums[left] ** 2
            else:
                answer_list[write] = right_square
                right -= 1
                right_square = nums[right] ** 2
            write -= 1
        return answer_list
