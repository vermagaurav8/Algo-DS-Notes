class Solution {
public:
    string countAndSay(int n) 
    {
        string s = "1";
        string result = "1";
        
        dfs (s, n-1, result);
        
        return result;
    }
    
    void dfs(string s, int n, string& result)
    {
        if (n == 0) return;
        
        string ret;
        
        int M = s.size();
        
        char prev = s[0];
        
        int count = 0;
        
        for (int i = 0; i < M; i++)
        {
            //cout << "prev: " << prev << endl;
            //cout << "s: " << s << endl;
            
            if (prev != s[i])
            {
                ret.push_back(count+'0');
                ret.push_back(prev);
                
                //cout << "ret1: " << ret << endl;
                
                count = 1;
            }
            else
            {
                count++;
            }
            
            prev = s[i];
        }
        
        ret.push_back(count+'0');
        ret.push_back(s[s.size()-1]);
        
        //cout << "ret2: " << ret << endl << endl;
        
        result = ret;
        
        dfs(ret, n-1, result);
    }
};
