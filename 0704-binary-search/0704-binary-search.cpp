class Solution {
public:
    int bin(vector<int>& nums, int left , int right, int target){
        if (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (target == nums[mid]) {
                return mid;
            }
            
            if (target < nums[mid]) {
                return bin(nums, left, mid - 1, target);
            } else {
                return bin(nums, mid + 1, right, target);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int s = nums.size();
        int left = 0; 
        int right = s - 1;
        int x = bin(nums, left, right, target);
        return x;   
    }
};
