class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        
        st = set(nums)
        cou = 0 
        for i in st:
            if i != 0:
                cou+=1
                
        return cou
        