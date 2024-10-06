class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        
      
        n = len(colors)
        m = 0
        
        for i in range(n-1):
            for j in range(i+1, n):
                if colors[i] != colors[j]:
                    m = max(m, j - i )
                    
        return m
                
                
            
        
        
            
        