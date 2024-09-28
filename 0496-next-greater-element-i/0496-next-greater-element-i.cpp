class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        
        for(int i =0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                bool found = false;
                if(nums1[i] == nums2[j]){
                    
                    for(int k = j+1; k<nums2.size(); k++){
                        if(nums2[k] > nums1[i]){
                            res.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                        
                    }
                    if(!found){
                        res.push_back(-1);
                        
                    }
                    break;
                }
              
                    
                }
            }
        
        return res;
        }
        
        
        
    
};