class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *a=new int(2);
        for(int i=0;i<n;i++) {
            if(arr[abs(arr[i])-1] >= 0){
                arr[abs(arr[i])-1]=0-arr[abs(arr[i])-1];
            }
            else
            {
                a[0]=abs(arr[i]); //repeating number
            }
        }

        for(int i=0;i<n;i++) {
            if(arr[i] >= 0)
            {
                a[1]=i+1; //missing number
            }
        }
        
        return a;
    }
};
