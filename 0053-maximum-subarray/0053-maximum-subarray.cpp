class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int ma = INT_MIN;
    int cur = 0;
        
      for(int i = 0; i<nums.size(); i++){
          cur =cur + nums[i];
          
          if(cur > ma){
              ma = cur;
          }
          
          if(cur <0){
              cur = 0;
          }
      }
        
        return ma;
    
        
    }
};
