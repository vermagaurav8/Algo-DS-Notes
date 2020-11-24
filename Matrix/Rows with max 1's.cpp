class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	  	    
	    int index = m,prev = m;
	    int rowNum = -1;
	    
	    for(int i=0;i<n;++i)
	    {
	        while((index-1)>=0 && arr[i][index-1] == 1)
	        {
	            --index;
	        }
	        
	        if(index < prev)
	        {
	            prev = index;
	            rowNum = i;
	        }
	    }
	    
	    return rowNum;
	}

};
