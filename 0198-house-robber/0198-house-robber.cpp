// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         vector <int> res;
//         for(int i=0; i<nums.size(); i++){
//             res[i] = nums[i];
//             for(int j= 0; j<nums.size(); j+2 ){
//                 res[i] += nums[j];
//             }
//         }
//         int maxElement = res[0];

//     // Iterate through the vector to find the maximum element
//     for (size_t i = 1; i < res.size(); ++i) {
//         if (res[i] > maxElement) {
//             // Update maxElement if a larger element is found
//             maxElement = res[i];
//         }
//     }

//     return maxElement;
        
//     }
// };

#include <vector>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        // Check if nums is empty
        if (nums.empty()) {
            return 0;
        }

        // Create a vector to store the maximum values at each house
        std::vector<int> res(nums.size(), 0);

        // Initialize the first two values
        res[0] = nums[0];
        if (nums.size() > 1) {
            res[1] = std::max(nums[0], nums[1]);
        }

        // Iterate through the rest of the houses to find the maximum value at each house
        for (int i = 2; i < nums.size(); ++i) {
            res[i] = std::max(res[i - 1], res[i - 2] + nums[i]);
        }

        // The final result is the maximum value at the last house
        return res.back();
    }
};
