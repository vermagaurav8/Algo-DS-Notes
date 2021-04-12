class Solution{
public:
    int xorCal(int k){
        // code here
        
        if(((k+1) & k) == 0){
            int c = k >> 1;
            if(c > 0) return c;
            return k << 1;
        } 
        return -1;
    }
};
