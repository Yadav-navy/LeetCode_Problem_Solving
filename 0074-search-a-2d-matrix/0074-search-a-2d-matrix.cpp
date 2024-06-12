class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int s = 0 ;
        int e = (rows * cols ) - 1 ;
        int mid;
        
        int matrix_row ;
        int matrix_col ;
        
        while (s <= e ){
            mid = s + (e - s) /2;
            matrix_row = mid / cols ;
            matrix_col = mid % cols;
            
            if (matrix[matrix_row][matrix_col] == target){
                return true;
            }
            else if (matrix[matrix_row][matrix_col] > target){
                e = mid - 1;
            }
            else{
                s = s + 1;
            }
            
        }
        
        return false;
        
    }
};