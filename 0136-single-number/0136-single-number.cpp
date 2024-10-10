class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> x;
        int q = 0;
        
        for(int i =0; i<nums.size(); i++){
            x[nums[i]]++;
        }
        
        
        for(auto const& p : x){
            if(p.second == 1){
                q = p.first;
                break;
            }
        }
            
       return q; 
    }
};