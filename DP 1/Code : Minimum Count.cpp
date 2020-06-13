#include<climits>
int minCount(int n,int arr[])
{   if(n==0)
    return 0;
   	if(n==1)
        return 1;
    
    int x = 1; 
    int min=INT_MAX;
    while(n-(x*x)>=0)
    {		
        	int t;

        if(arr[n-(x*x)]==-1)
        { 
            	t = 1 + minCount(n-(x*x),arr);
            	arr[n-(x*x)] = t-1;
        }
        
        else 
            	t  = arr[n-(x*x)] + 1;
        
        if(t<min)
            min = t;
        	
        x++;
    }
        
    return min;
}    
    
    
    
    
int minCount(int n){
    
    int *arr= new int[n+1];
    arr[0]=0;
    arr[1]=1;
    for(int i=0;i<=n;i++)
        arr[i]=-1;
    return minCount(n, arr);
    
}
