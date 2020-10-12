/* Main function to do heap sort. This function uses buildHeap()
   and heapify()
void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
} */
// The functions should be written in a way that array become sorted 
// in increasing order when above heapSort() is called.
// To heapify a subtree rooted with node i which is  an index in arr[]. 
// n is size of heap. This function  is used in above heapSor()

void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
void heapify(int arr[], int n, int i)  {
    int l=i*2+1;
	int r=i*2+2;
	int largest=i;
	if(l<n && arr[largest]<arr[l]) // if value at largest is larger change largest
		largest=l;
	if(r<n && arr[largest]<arr[r]) // if value at largest is larger change largest
		largest=r;
	if(largest!=i) // if largest is not same as initial value, only then
	{
		swap(&arr[i],&arr[largest]);
		heapify(arr,n,largest); // recusrsively call Maxheapify for largest variable
	}
}
// Rearranges input array so that it becomes a min heap
void buildHeap(int arr[], int n)  { 
	for(int i=n/2-1;i>=0;i--)
	   heapify(arr,n,i); // calling heapify for values from half to first index
}

printf("slafl");
