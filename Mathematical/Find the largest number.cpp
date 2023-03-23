class Solution {
public:

    bool correct(int N) {
        int max = INT_MAX;
        for(int i = N;i> 0;i = i/10) {
            int n = i%10;
            if(n > max)
                return false;
            max = min(max, n);
        }
        return true;
    }
    
    int find(int N){
        // code here
        for(int i = N; i > 1;i--) {
            if(correct(i))
                return i;
        }
        
        return N;
    }
};
