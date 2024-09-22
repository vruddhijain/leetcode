class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        n = len(nums)
        
        if n == 0:
            return 0
        nums.sort()
        
        
        cur = 1
        maxu = 1
       
        for i in range(1, n):
            if nums[i] == nums[i - 1]:
                continue
                
            if nums[i] == nums[i - 1] + 1:
                cur += 1
                maxu = max(maxu, cur)
                
                
            else:
                cur = 1
                
        return maxu
            
            
        