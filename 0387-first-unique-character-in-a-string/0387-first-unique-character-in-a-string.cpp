class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map <char, int> x;
        
        for(int i =0; i<s.size(); i++){
            x[s[i]]++;
        }
        
        for(int i=0; i<s.size(); i++){
            if(x[s[i]] == 1){
                return i;
                break;
            }
        }
        return -1;
        
    }
};