class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        ans = []
        for i in range(len(nums)//2):
            curr = [nums[2*i+1]]*nums[2*i]
            ans += curr
        return ans
