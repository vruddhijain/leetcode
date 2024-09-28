class Solution {
public:
    string convertToTitle(int c) {
string s = "";
        
        while (c > 0) {
            c--; 
            
            int r = c % 26;
            char letter = 'A' + r;
            s.push_back(letter);
            c /= 26;
        }
        
        reverse(s.begin(), s.end());
        
        return s;
    }
};