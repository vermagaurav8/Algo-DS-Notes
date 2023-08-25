// USE MOORE's VOTING ALGORITHM

int majorityElement(int a[], int size)
{
    
    // your code here
    if(size == 1) { return a[0];}
    if(size == 2) { return -1; }
    
    int count = 1, result = a[0];
    
    for(int i = 1;i<size;i++) {
        if(a[i] == result) count++;
        else count--;
        
        if(count == 0){
            result = a[i];
            count = 1;
        }
    }
    
    count = 0;
    for(int i = 0;i < size;i++) {
        if(a[i] == result) count++;
        
    }
    
    if(count >size/2) return result;
    return -1;
    
}
