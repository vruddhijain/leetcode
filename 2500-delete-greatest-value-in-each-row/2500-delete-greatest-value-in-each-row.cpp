class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        
        for(int i=0; i<m; i++){
            sort(grid[i].begin(), grid[i].end());
        }
        
        
        for(int j = n-1; j >= 0; j--){
            int max = -1;
            for(int i =0; i<m;i++ ){
                if(grid[i][j] > max){
                    max = grid[i][j];
                }
            }
            ans += max;
        }
        return ans;
    }
};