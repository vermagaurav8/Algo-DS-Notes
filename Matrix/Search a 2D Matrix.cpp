class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
                if(matrix.empty() or matrix[0].empty()) {
                        return false;
                }
        
                int n = matrix.size();
                int m = matrix[0].size();
            
                int left = 0;
                int right = m*n-1;
            
                while(left <= right){
                        int middle = (right-left)/2+left;
                        
                        if(matrix[middle/m][middle%m] == target) {
                                return true;
                        }
                        
                        else if(matrix[middle/m][middle%m] < target) {
                                left = middle+1;
                        }
                        
                        else{
                                right = middle - 1;
                        }
                }
            
            
                return false;
    }                    
};
