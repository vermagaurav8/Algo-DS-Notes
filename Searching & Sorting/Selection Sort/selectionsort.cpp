#include <iostream>

using namespace std;


int main(){

	int a[100],n;

	cin>>n;

	for (int i=0;i<n;i++){
		cin>>a[i];
	}

	// sorting algorithm

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){

			int temp;
			if(a[i]>a[j]){		// Ascending Sort

				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}