class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        
        s1 = s[:len(s)//2]
        s2 = s[len(s)//2:]
        count1 = 0
        count2 =0
        for i in s1:
            if i.lower() in ['a','e','i','o','u']:
                count1 += 1
                
        for c in s2:
            if c.lower() in ['a','e','i','o','u']:
                count2 += 1
                
                
        if count1==count2:
            return True
        
        return False
                
 

        