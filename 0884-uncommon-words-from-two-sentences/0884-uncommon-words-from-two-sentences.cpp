class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
     vector<string> a;
    
        stringstream one(s1);
        stringstream two(s2);
        vector<string> res;
        string word1;
        string word2;
        unordered_map<string, int> x;
    
        
        
         while (one >> word1) {
        a.push_back(word1);
    }
        
           while (two >> word2) {
        a.push_back(word2);
    }
        
        
        for(int i=0; i<a.size(); i++){
            x[a[i]]++;
        }
        
        for(auto &c : x){
            if(c.second == 1){
                res.push_back(c.first);
            }
        }
    
        
        
        return res;
        
    
        
    }
};