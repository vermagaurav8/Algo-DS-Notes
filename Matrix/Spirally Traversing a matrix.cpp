
// USE OF 4 POINTERS 

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>a;
        
        int top, down, left,right;
        int direction = 0;
    
        top = 0;
        down = r-1;
        left = 0;
        right = c-1;
        
        while(left<=right && top <= down) {
            if(direction == 0) {
                for(int i = left;i<=right;i++) {
                    a.push_back(matrix[top][i]);
                }
                top++;
            }
            
            else if(direction == 1) {
                for(int i = top; i<=down;i++) {
                    a.push_back(matrix[i][right]);
                }
                right--;
            }
            
            else if(direction == 2) {
                for(int i = right ; i>=left;i--) {
                    a.push_back(matrix[down][i]);
                }
                down--;
            }
            
            else if(direction == 3) {
                for(int i = down; i>=top;i--) {
                    a.push_back(matrix[i][left]);
                }
                left++;
            }
            
            direction = (direction+1)%4;
        }
        
        return a;
    }
