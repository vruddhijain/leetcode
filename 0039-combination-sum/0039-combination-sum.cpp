class Solution {
public:
    vector<int> ans;
    vector<int> nums;
    vector<vector<int>> res;
    void re(int target, int start){
        if(target == 0){
            res.push_back(ans);
        }
        
        int n = nums.size();
        for(int i = start; i<n; i++){
            if(nums[i] > target) continue;
            
         else{
            ans.push_back(nums[i]);
         re(target-nums[i] , i);
             ans.pop_back();
         
         
         }
        }
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
    nums = candidates;
        
    re(target, 0);
        return res;
        
    }
};