class Solution {
public:
    int maxPower(string s) {
        
        if(s.size() == 0)
            return 0;
        
        int alphabet[26];
        memset(alphabet, 0, sizeof(alphabet));
        
        int solution = 1;
        
        for(int i = 0;i<s.size(); i++){
            int c = s[i]-'a';
            
            if(i > 0 && s[i-1]-'a' == c){
                alphabet[c]++;
            }else{
                alphabet[c] = 1;
            }
            solution = max(solution, alphabet[c]);
        }
        
        return solution;   
    }
};
