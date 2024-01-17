class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int rowIdx=0;
        int colIdx=cols-1;
        while(rowIdx<rows && colIdx>=0)
        {
           if(matrix[rowIdx][colIdx]==target)
           {
               return true;
           }  
           else if(matrix[rowIdx][colIdx]>target)
           {
               colIdx--;
           }
           else
           {
               rowIdx++;
           }
        }
        return false;
    }
};