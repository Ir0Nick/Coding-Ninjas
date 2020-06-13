#include<climits>

int countStepsTo1(int n,int *arr){
	if(n==1)
        return 0;
    int d1,d2,d3;
    d1=d2=d3=INT_MAX;
    if(n%3==0)
    {
        if(arr[n/3]==-1)
        {
            d3= 1+countStepsTo1(n/3,arr);
            arr[n/3]=d3;
        }
        else d3 = arr[n/3];
    }
      if(n%2==0)
    {
        if(arr[n/2]==-1)
        {
            d2=1+ countStepsTo1(n/2,arr);
            arr[n/2]=d2;
        }
        else d2 = arr[n/2];
    }
    if(arr[n-1]==-1)
    {
        d1 = countStepsTo1(n-1,arr)+1;
    	arr[n-1]=d1;
    }
    else
        d1 = arr[n-1];

    return min(d1,min(d2,d3));
    

}

int countStepsTo1(int n)
{
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++)
        arr[i]=-1;
    return countStepsTo1(n,arr);
}
