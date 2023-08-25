class Solution {
  public:
    int countSquares(int N) {
        // code here
        
        int i = 1, count = 0;
        
        while(i*i<N){
            count++;
            i++;
        }
        
        return count;
    }
};
