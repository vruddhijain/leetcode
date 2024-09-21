class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        
        li = []
        for i in range(1, n+1):
            x = str(i)
            li.append(x)
            
            
        li.sort()
        lp = []
        for i in range(n):
            c = int(li[i])
            lp.append(c)
            
            
            
        return lp
            
            
            
        