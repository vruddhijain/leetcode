class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      
        
    
    int length = nums.size();

        vector<int> rotated(length);

        for (int i = 0; i < length; i++) {
            rotated[(i + k) % length] = nums[i];
        }

        for (int i = 0; i < length; i++) {
            nums[i] = rotated[i];}
        
    }
};