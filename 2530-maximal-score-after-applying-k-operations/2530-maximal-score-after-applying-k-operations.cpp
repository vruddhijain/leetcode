class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long res = 0;
   
        priority_queue<int> pq(nums.begin(), nums.end());

        for(int i = 0; i < k; i++) {
            int maxElement = pq.top();
            pq.pop();
            res += maxElement;
           
            pq.push(ceil(maxElement / 3.0));
        }

        return res;
        
    }
};