class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int cou = 0;
        for(char c: s){
            if(c == '1'){
                cou++;
            }
        }
        
        s[s.size() - 1] = '1';
        cou--; 

        for (int i = 0; i < cou; i++) {
            s[i] = '1';
        }

    
        for (int i = cou; i < s.size() - 1; i++) {
            s[i] = '0';
        }

        return s;
        
        
    }
};