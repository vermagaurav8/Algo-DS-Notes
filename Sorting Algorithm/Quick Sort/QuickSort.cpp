#include <iostream>

using namespace std;

void swap(int *x, int *y){

	int temp = *x;
	*x = *y;															// Process of swapping
	*y = temp;
}

int partition(int array[], int start, int end){

	int pivot = array[end];
	int index = start-1;
																	//Getting index of the pivot
	for(int j = start; j<=end-1; j++){

		if(array[j] <= pivot){
			index++;
			swap(&array[index], &array[j]);
		}
	}
	swap(&array[index+1], &array[end]);
	return(index+1);
}

void QuickSort(int array[], int start, int end){

	if(start >= end){
		return;
	}
																		//Recursive algorithm for the quick sort
	int index = partition(array, start, end);

	QuickSort(array, start, index-1);
	QuickSort(array, index+1, end);
}

int main(){

	int array[1000], size;
	
	cout<<"Enter the size of the array :- ";
	cin>>size;

	cout<<"Enter the array :- ";
	for(int i = 0; i<size; i++){
		cin>>array[i];													//Input the array
	}

	QuickSort(array, 0, size-1);

	cout<<"The sorted array is :- ";

	for(int i = 0; i<size; i++){
		cout<<array[i]<<" ";											// Output
	} 

	return 0;
}																		// Time complexity     1. In worst case = O(n^2)
																		//					   2. In average case = O(n*log n)				  