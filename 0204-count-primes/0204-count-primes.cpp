class Solution {
public:
    int countPrimes(int n) {
        
        
       vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        int c=0;
        for(int i=2;i<sqrt(n);i++){
            if(prime[i]){
                
                for(int j=i*i;j<n;j=j+i){
                    prime[j]=0;
                }
            }

        }
        for(int i=0; i<n; i++){
            if(prime[i]){
                c++;
            }
        }
        
        return c;
        
    }
};