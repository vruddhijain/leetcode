class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        
        stones.sort()
        
        while len(stones) > 1:
            
            
            if stones[-1] != stones[-2]:
                p = stones[-1]
                q = stones[-2]
                stones.pop()
                stones.pop()
                stones.append(p - q)
                stones.sort()
                
            else:
                stones.pop()
                stones.pop()
                
        if len(stones) == 1:
            return stones[0]
        
        return 0
                
            
        
        
        
        