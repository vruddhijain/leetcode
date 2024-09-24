class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int peri = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                if(grid[i][j] == 1){
                    int cou1 = 0;
                    if(i >0 && grid[i-1][j] == 1){
                        cou1++;
                    }
                    if( i <m-1 && grid[i+1][j] == 1){
                        cou1++;
                    }
                    if(j >0 && grid[i][j-1] == 1){
                        cou1++;
                    }
                    if(j< n-1 && grid[i][j+1]==1){
                        cou1++;
                    }
                     peri = peri + 4 - cou1;
                }
                
               
            }
        }
        
        return peri;
        
        
       
        
        
    }
};