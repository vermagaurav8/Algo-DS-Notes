#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int testCases;
	cin>>testCases;
	int matrix[3][3];
	
	while(testCases--) {
	    for(int i = 0;i<3;i++)
	        for(int j = 0;j<3;j++)
	            cin >> matrix[i][j];
	    
	    int ans = (matrix[0][0]*( (matrix[1][1]*matrix[2][2]) - (matrix[2][1]*matrix[1][2])) )
	            - (matrix[0][1]*( (matrix[1][0]*matrix[2][2]) - (matrix[2][0]*matrix[1][2])) )
	            + (matrix[0][2]*( (matrix[1][0]*matrix[2][1]) - (matrix[2][0]*matrix[1][1])) );
	    
	    if(ans != 0) 
	        cout<< "3" << endl;
	    else
	        cout<< "2" << endl;
	}

	return 0;
}
