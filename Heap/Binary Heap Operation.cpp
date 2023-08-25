/*The structure of the class is
struct MinHeap
{
    int *harr;
    int capacity, heap_size;
    MinHeap(int cap) {heap_size = 0; capacity = cap; harr = new int[cap];}
    int extractMin();
    void deleteKey(int i);
    void insertKey(int k);
    int parent(int i);
    int left(int i);
    int right(int i);
};*/

// You need to write code for below three functions
int MinHeap ::  extractMin()
{   if(heap_size == 0)
        return -1;
    int a = harr[0];
    swap(harr[0],harr[heap_size-1]);
     heap_size--;
    MinHeapify(0);
   
    
    return a;
}
/* Removes element from position x in the min heap  */
void MinHeap :: deleteKey(int i)
{   if(i<0 || i>=heap_size)
        return;
    decreaseKey(i,INT_MIN);
    extractMin();
}
/* Inserts an element at position x into the min heap*/
void MinHeap ::insertKey(int k)
{
    if(heap_size == capacity)
    return;
    harr[heap_size] = INT_MAX;
    heap_size++;
    decreaseKey(heap_size-1,k);
}
// Decrease Key operation, helps in deleting key from heap
void MinHeap::decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(harr[i], harr[parent(i)]);
       i = parent(i);
    }
}
/* You may call below MinHeapify function in
   above codes. Please do not delete this code
   if you are not writing your own MinHeapify */
void MinHeap::MinHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) smallest = l;
    if (r < heap_size && harr[r] < harr[smallest]) smallest = r;
    if (smallest != i) {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}