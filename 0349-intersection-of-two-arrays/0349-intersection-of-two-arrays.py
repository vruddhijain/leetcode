class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        st1 = set(nums1)
        st2 = set(nums2)
        
        
        
        
        li = [i for i in st1 if i in st2]
                
                
        return li;
        