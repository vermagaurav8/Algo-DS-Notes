vector<long long int> productExceptSelf(vector<long long int>& arr, int n) 
{
    unsigned long long int ans=1; int count=0; int index;
    vector<long long int> v; bool flag=false;
    
    for(int i=0;i<n;i++)
   {
       if(arr[i]==0)
            count++;
   }
    
   for(int i=0;i<n;i++)
   {
       if(count==0)
            ans*=arr[i];
            
        if(count==1)
        {
            if(arr[i]==0)
                index=i;
            else
                ans*=arr[i];
        }
       
       
   }
   
   for(int i=0;i<n;i++)
   {
       if(count>=2)
            v.push_back((0));
            
        if(count==0)
            v.push_back(ans/arr[i]);
        
        if(count==1)
        {
            if(i==index)
                v.push_back(ans);
            else
                v.push_back(0);
        }
   }
   return v;
}
