#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


int main()
{
	int arraytosort[100],size;

	cout  <<"Enter the size of the array :- ";
	cin >> size;

	for (int i=0;i<size;i++){
		cin>>arraytosort[i];	// Input the array
	}

	// Algorithm for the bubble sort

	for (int i=0;i<size;i++){
		for (int j=0;j<size-1;j++){
			if (arraytosort[j] > arraytosort[j+1])
				swap(&arraytosort[j], &arraytosort[j+1]);
		}
	}

	// Print the array

	for (int i=0;i<size ;i++){
		cout<<arraytosort[i]<<" ";
	}

	return 0;
}