class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int n = nums.size();
        int i =0;
        int j = 0;
        int count  = 0;
        int pro = 1;
        
        while(j<n){
            pro = pro * nums[j];
            
          
            
            while(pro >= k && i<= j){
                pro = pro / nums[i] ;
                i++;
            }
           
            
            count = count + (j-i+1);
            j++;
            
            
        }
        
        return count;
    }
};