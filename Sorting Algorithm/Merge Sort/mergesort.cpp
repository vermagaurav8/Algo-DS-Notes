#include <iostream>

using namespace std;

void merge(int array[], int start, int middle, int end){		//Algorithm for the merge sort

	int n = middle-start+1;
	int m = end- middle;

	int leftarray[1000]; int rightarray[1000];

	for(int i =0;i<n;i++){									//Copying the element into sub-Array
		leftarray[i] = array[start+i];
	}

	for (int j=0;j<m;j++){							
		rightarray[j] = array[middle+1+j];
	}

	int i = 0; int j = 0; int k = start;

	while(i<n && j<m){										//Sorting and merging the sub-Array
		if (leftarray[i] <= rightarray[j]){
			array[k] = leftarray[i];
			i++;
			k++;
		}
		else{
			array[k] = rightarray[j];
			j++;
			k++;
		}
	}

	while(i<n){												//copying remaining element in the main array
		array[k] = leftarray[i];
		i++;
		k++;
	}

	while(j<m){
		array[k] = rightarray[j];
		j++;
		k++;
	}
}


void mergesort(int array[], int start , int end){			//Breaking into sub-Array using recursion
	if(start<end){ 
	int middle  = start + (end-start)/2;

	mergesort(array , start, middle);
	mergesort(array, middle+1, end);
	merge(array, start, middle, end);
	} 
}

int main(){													//Driver Code

	int array[1000], size;

	cout<<"Enter the size of the array :- ";
	cin>>size;

	cout<<"Enter the array :- ";
	for(int i=0; i<size; i++){
		cin>>array[i];
	}

	mergesort(array, 0, size-1);

	cout<<"the sorted array is : ";

	for(int i=0; i<size; i++){
		cout<<array[i]<<" ";
	}

	return 0;
}												// Time omplexity for the merge sort is O(n*log n)