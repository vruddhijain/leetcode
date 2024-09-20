class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        nums.append(target)
        
        set(nums)
        
        nums.sort();
        
        
        return nums.index(target) 
        