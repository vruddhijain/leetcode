class Solution:
    def reverseWords(self, s: str) -> str:
        li = s.split()
        
        a= ""
        i = len(li) - 1
        a += li[i]
        j = i-1
        while j >= 0:
            
            a += " "
            a += (li[j])
            j -= 1
            
            
        return a
            
            
        
        
        