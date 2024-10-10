class Solution {
public:
    string frequencySort(string s) {
        
       unordered_map<char, int> x;
        for (char ch : s) {
            x[ch]++;
        }
        
       
        priority_queue<pair<int, char>> pq;
        for (auto const& p : x) {
            pq.push({p.second, p.first}); // Push the frequency and character
        }

        string r = "";
        while (!pq.empty()) {
            char ch = pq.top().second;  // Get the character
            int count = pq.top().first; // Get the frequency
            pq.pop();
            
            for (int i = 0; i < count; i++) {
                r.push_back(ch);
            }
        }
        
        return r; 
        
    }
};