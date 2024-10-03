class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long sum = 0;

        // Calculate the total sum of the array
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        
        // Find the remainder when sum is divided by p
        int remainder = sum % p;
        
        // If remainder is 0, no need to remove any subarray
        if (remainder == 0) {
            return 0;
        }
        
        // Map to store the prefix modulo and its index
        unordered_map<int, int> mp;
        mp[0] = -1;  // This handles the case where the subarray starts from index 0
        
        int currentSum = 0;
        int minLen = n;
        
        for (int i = 0; i < n; i++) {
            // Accumulate the current sum
            currentSum = (currentSum + nums[i]) % p;
            
            // Calculate the needed value that would make the total sum divisible by p
            int target = (currentSum - remainder + p) % p;
            
            // Check if this value has been seen before
            if (mp.find(target) != mp.end()) {
                minLen = min(minLen, i - mp[target]);
            }
            
            // Store the current prefix sum's modulo with its index
            mp[currentSum] = i;
        }
        
        // If no valid subarray was found, return -1
        return minLen == n ? -1 : minLen;
    }
};
