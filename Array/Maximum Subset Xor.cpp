/*
    Problem Link : https://practice.geeksforgeeks.org/problems/maximum-subset-xor/1/?category[]=Arrays&problemStatus=unsolved&difficulty[]=2&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]2page1
*/

int maxxor(int a[], int len, int last)
{
    if(len==0)
        return last;
    int op1 = a[len-1] xor last;
    int op2 = maxxor(a,len-1,a[len-1] xor last);
    int op3 = maxxor(a,len-1,last);
    return max(op1,max(op2,op3));
}
int maxxor2(int a[], int len, int total)
{
    int arr[len+1][total+1];
    for(int i=0;i<=len;i++)
    {
        for(int j=0;j<=total;j++)
        {
            if(i==0)
                arr[i][j] = j;
            else
            {
                int op1 = a[i-1] xor j;
                int b = a[i-1] xor j;
                int op2 = arr[i-1][b];
                int op3 = arr[i-1][j];
                arr[i][j] = max(op1,max(op2,op3));
            }
        }
        
    }
    return arr[len][0];
}
int maxSubarrayXOR(int A[], int n)
{
    //Your code here
    int total = 0;
    total=accumulate(A,A+n,0);
    return maxxor2(A,n,total);
}