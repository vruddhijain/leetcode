// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//     int m = matrix.size();
//     int n = matrix[0].size();
//     int left = 0;
//     int right = m*n - 1;
        
//     while(left<=right){
//         int mid = left + (right-left)/2;
//         int x = mid/n;
//         int y = mid%n;
//         int mid_element = matrix[x][y];
                            
//         if(mid_element == target){
//             return true;}
//         else if(mid_element < target)
//             left = mid + 1;
//         else{
//             right = mid - 1;}

    
//     }
//     return false;  
    
        
//     }
// };


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    if (matrix.empty() || matrix[0].empty()) {
            return false; // Check if the matrix or the first row is empty
        }
        
    int m = matrix.size();
    int n = matrix[0].size();
    int ex = -1; 

    for(int i=0; i<m; i++){
        if(matrix[i][0] == target || matrix[i][n-1] == target){
            return true;
        }
        if(matrix[i][0] < target  && target < matrix[i][n-1] ){
            ex = i;
            break;
        }
    }
        
        if (ex == -1) {
            return false;
        }
        for(int j =0; j< n; j++){
            if(matrix[ex][j] == target){
                return true;
            }
        }
        
        return false;
        
    }
};