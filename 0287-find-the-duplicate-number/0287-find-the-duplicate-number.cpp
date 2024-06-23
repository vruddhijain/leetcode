class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int x = nums.size();
    int res = 0;
//     sort(nums.begin(),nums.end());
        
//     for(int i=1; i<x ;i++){
//         if(nums[i-1] == nums[i]){
//             res = nums[i];
//         }
//     }
    
    
//     return res;
    
        unordered_map<int, int> xu;
        for(const auto& key: nums){
            xu[key]++;
            if(xu[key]>1){
                res = key;
            }
        }
        
        return res;
        
        
    }
};