class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        
        vector<bool> x(n, true);
        x[0] = false;
        x[1] = false;
        for(int i = 2; i<sqrt(n); i++){
            
            if(x[i]){
            for(int j = i*i; j<n; j+=i){
                x[j] = false;
            }}
        }
        
        
        int co = 0;
        
        for(int i = 2; i<n; i++){
            if(x[i] == true){
                co++;
            }
        }
        
        return co;
        
    }
};