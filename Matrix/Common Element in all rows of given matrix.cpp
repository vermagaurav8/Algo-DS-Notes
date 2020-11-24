// prints common element in all rows of matrix 
void printCommonElements(int mat[M][N]) 
{ 
	unordered_map<int, int> mp; 
	for (int j = 0; j < N; j++) 
		mp[mat[0][j]] = 1; 

	// traverse the matrix 
	for (int i = 1; i < M; i++) 
	{ 
		for (int j = 0; j < N; j++) 
		{ 
			if (mp[mat[i][j]] == i) 
			{ 
				mp[mat[i][j]] = i + 1; 

				if (i==M-1) 
				cout << mat[i][j] << " "; 
			} 
		} 
	} 
} 
