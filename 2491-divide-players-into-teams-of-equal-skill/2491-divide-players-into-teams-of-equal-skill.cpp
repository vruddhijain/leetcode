class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        
        
        int n = skill.size();
        
        if(n % 2 != 0){
            return -1;
        }
        
        sort(skill.begin(), skill.end());
        int i = 0;
        int j = n-1;
        long long res = 0;
        int sum =0;
        
        for(int i =0; i<n; i++){
            sum = sum + skill[i];
        }
        
        int tar = sum * 2 / n;
        
        while(i <j){
            if(skill[i] + skill[j] != tar){
                return -1;
            }
            res += skill[i] * skill[j];
            i++;
            j--;
            
        }
        
        return res;
        
    
        
        
        
        
    }
};