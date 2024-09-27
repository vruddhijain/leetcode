class Solution {
public:
   
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        multimap<int, int> x;
        for(int i =0; i<points.size(); i++){
            int d = (points[i][0] * points[i][0]) + (points[i][1]*points[i][1]);
            
            
            x.insert({d,i});
            
        }
        
        for(const auto& p: x){
            if (k == 0) break;
            res.push_back(points[p.second]);
            k--;
            
            
            
        }
        return res;
        
    }
};