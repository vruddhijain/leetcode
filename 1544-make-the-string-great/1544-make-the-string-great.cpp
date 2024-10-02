class Solution {
public:
    string makeGood(string s) {
        
        
        if(s.size() == 0 || s.size() == 1){
            return s;
        }
        
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            
            if(!st.empty() && abs(s[i] - st.top()) == 32){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            
        }
        string res = "";
        if(st.empty()){
            return res;
        }
        while(!st.empty()){
            
            char c = st.top();
            st.pop();
            res.push_back(c);
        }
        
        
        reverse(res.begin(), res.end());
        return res;
        
    }
};