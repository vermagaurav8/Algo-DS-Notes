#include <iostream>

using namespace std;

int main ()
{
	int array[1000], element_to_search, size_of_array;

	cout<<"Enter the size of the array :- "<<" ";
	cin>>size_of_array;

	for(int i = 0; i<size_of_array; i++){
		cin>>array[i];											//Input by the user
	}

	cout<<"Enter the element to search :- ";
	cin>>element_to_search;

	for (int i = 0; i<size_of_array; i++){
		if (array[i] == element_to_search){
			cout <<"element found at index i = "<<i;			 //Checking weather the element is present in array or not
		}
	}

	return 0;
}