#include <iostream>

using namespace std;

int binarysearch(int array[],int size,int x)
{															// code for the binary search
	int firstindex = 0;
	int lastindex = size-1;
	

	while(firstindex<=lastindex)
	{
		int middle = (firstindex +lastindex)/2;

		if(array[middle] == x){
			return middle;
		}
		else if(array[middle] > x)
		{
			lastindex = middle-1;
		}
		else if(array[middle] < x)
		{
			firstindex = middle + 1;
		}
	}
	return -1;

};

int main()
{

	int array[100],size,i,x;

	cout<<"Enter the size of the array : ";
	cin>>size;

	cout <<"Enter the array : ";
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}


	cout<<"Enter the number you want to search"<<endl;
	cin>>x;

	int result =binarysearch(array,size,x);

	if(result == -1){
		cout<<"element is not  found";
	}else{
		cout<<"element found at index "<<result;
	}

	return 0;
}