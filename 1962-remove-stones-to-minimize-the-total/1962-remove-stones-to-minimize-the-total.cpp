class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int> pq(piles.begin(), piles.end());
        
        for(int i = 0; i < k; i++) {
            int x = pq.top();
            pq.pop();
            
            pq.push(x - floor(x / 2));
        }
        
        int res = 0;
        while (!pq.empty()) {
            res += pq.top();
            pq.pop();
        }

        return res;
    }
};