#include <iostream>

using namespace std;

int main(){


	int a[100],size, index, value;

	cin>>size;

	for (int i=0;i<size;i++){		//Input the array by the user
		cin>>a[i];
	}

	for (int i=0 ;i<size; i++){

		index = i;
		value = a[i];
		while (index > 0 && a[index-1]>value){		// Algorithm for the insertion sort
			a[index] = a[index-1];					// Sort in ascending order
			index = index-1;
		}
		a[index] = value;
	}



	for (int i = 0;i<size;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}