class Solution {
public:
    
    int halveArray(vector<int>& nums) {
        
        
        priority_queue<double> pq;
        double totalSum = std::accumulate(nums.begin(), nums.end(), 0.0);
        double halfSum = totalSum / 2.0;

        
        for (int num : nums) {
            pq.push(static_cast<double>(num));
        }

        double currentSum = totalSum;
        int cou = 0;
         while (currentSum > halfSum) {
            double largest = pq.top();
            pq.pop(); 

           
            double reduced = largest / 2.0;

            
            currentSum -= reduced;

            pq.push(reduced);

            
            cou++;
        }

        return cou;
        
        
        
        
        
        
    }
};