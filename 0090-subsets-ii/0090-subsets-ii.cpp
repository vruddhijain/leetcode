class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // Sort the input to ensure that duplicates are adjacent
        sort(nums.begin(), nums.end());
        
        set<vector<int>> uniqueSubarrays;
        int n = nums.size();
        int x = 1 << n;
        
        for (int num = 0; num < x; num++) {
            vector<int> p;
            
            for (int i = 0; i < n; i++) {
                if (num & (1 << i)) {
                    p.push_back(nums[i]);
                }
            }
            
            uniqueSubarrays.insert(p);
        }
        
        // Convert the set back to a vector
        vector<vector<int>> res(uniqueSubarrays.begin(), uniqueSubarrays.end());
        return res;
    }
};
