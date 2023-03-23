class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int start = 0,end = S.size()-1;
	    
	    while(start<end) {
	        if(S[start++] != S[end--])
	            return 0;
	    }
	    
	    return 1;
	}

};
