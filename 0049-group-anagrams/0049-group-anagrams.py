class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        
        
        dic = {}
        
        for i in range(len(strs)):
            x = strs[i]
            sx = "".join(sorted(x))
            
            if sx not in dic:
                dic[sx] = []
                
                
            dic[sx].append(strs[i])
            
            
        return list(dic.values())
        
        
        
        
        
        
            
            
        
        