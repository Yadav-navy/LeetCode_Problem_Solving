class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        
        int matrix_row =  0;
        int matrix_col = col - 1;
        
        while (matrix_row < rows && matrix_col >= 0 ){
            if (matrix[matrix_row][matrix_col] == target){
                return true;
            }
            
            else if (matrix[matrix_row][matrix_col] > target){
                matrix_col--;
            }
            else{
                matrix_row++;
            }
        }
        return false;
        
    }
};