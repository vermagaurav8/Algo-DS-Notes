class Solution{
    public:
    
    static int comp(int a, int b){
        return __builtin_popcount(a) > __builtin_popcount(b);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr, arr+n, comp);
    }
};
