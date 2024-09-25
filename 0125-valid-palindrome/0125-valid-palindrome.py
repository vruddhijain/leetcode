class Solution:
    def isPalindrome(self, s: str) -> bool:
        x = ""
        
        for i in range(len(s)):
            if s[i].isalnum():  
                x += s[i].lower() 
                
        
            
            
            
        p = x[::-1]
        
        if x==p:
            return True
        
        return False
        