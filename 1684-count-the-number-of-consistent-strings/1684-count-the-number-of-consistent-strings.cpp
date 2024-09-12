class Solution {
public:
    int countConsistentStrings(string a, vector<string>& words) {
        
        unordered_set<int> s;
        int c = words.size();
        
        for(int i=0; i<a.size(); i++){
            s.insert(a[i]);
        }
        
        
        for(int i =0; i< words.size(); i++){
            for(int j =0; j<words[i].size(); j++){
                if(s.find(words[i][j]) == s.end()){
                    c--;
                    break;
                }
            }
        }
        
        return c;
        
    }
};