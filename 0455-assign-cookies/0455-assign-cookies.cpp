class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());
        
        int i =0;
        int j = 0;
        int co =0;
        while(i < g.size() && j < s.size()){
            if(s[j] < g[i]){
                i++;
            }
            else if(s[j] >= g[i]){
                co++;
                 i++;
                j++;
            }
        }
 
        return co;
    }
};