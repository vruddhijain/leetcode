class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        
        for (int i = 0; i < s.size(); i++) {
            // If the current character is an opening bracket
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                x.push(s[i]);
            }
         
            else {
                if (x.empty()) {
                    
                    return false;
                }
                
                char top = x.top();
                if ((s[i] == ')' && top == '(') ||
                    (s[i] == '}' && top == '{') ||
                    (s[i] == ']' && top == '[')) {
                    x.pop();
                } else {
                   
                    return false;
                }
            }
        }
        
        // If stack is empty, all brackets are matched; otherwise, some opening brackets are unmatched
        return x.empty();
    }
};
