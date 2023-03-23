class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here          
        int min = INT_MAX, max = INT_MIN;
        // Maximum and minimum element from the array
        for(int i = 0;i<r;++i) {
            if(matrix[i][0] < min) {
                min = matrix[i][0];
            }
            
            if(matrix[i][c-1] > max) {
                max = matrix[i][c-1];
            }
        }
        
        int desired = (r*c +1)/2;
        
        while(min<max) {
            int mid = min + (max - min) /2;
            int place = 0;
            
            for(int i = 0 ;i<r;i++) {
                place += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(place<desired) {
                min = mid +1;
            }
            else{
                max = mid;
            }
        }
        
        return min;
    }
};
