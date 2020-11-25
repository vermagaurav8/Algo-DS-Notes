
//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here''
	    vector<int>a;
	    
	    int temp = -1;
	    
	    for(int i = 0;i<n;i++){
	        if(arr[i] == i+1){
	            a.push_back(i+1);
	            temp = 0;
	        }
	    }

	    
	    return a;
	}
};
