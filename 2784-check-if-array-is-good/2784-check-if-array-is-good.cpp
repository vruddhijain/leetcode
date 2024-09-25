class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        if(nums.size() == 1){
            return false;
        }
        
        
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] != i+1){
                return false;
            }
        }
        
        if(nums[nums.size()-1] == nums[nums.size()-2]){
            return true;
        }
                            
         return false;
    }
};