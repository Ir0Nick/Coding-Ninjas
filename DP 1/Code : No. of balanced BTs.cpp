
long long balancedBTs(int h,long long arr[]) {
 if(h==0)
     return 0;
    if(arr[h]!=-1)
        return arr[h];
    if(arr[h-1]==-1)
    arr[h-1]= balancedBTs(h-1,arr);
    if(arr[h-2]==-1)
    arr[h-2]= balancedBTs(h-2,arr);
    arr[h] = (arr[h-1]*arr[h-1])%1000000007 + (2*arr[h-1]*arr[h-2])%1000000007;
    return arr[h]%1000000007;
    
}

 long long balancedBTs(int h)
{
    long long arr[h+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=h;i++)
        arr[i]=-1;
    return balancedBTs(h, arr);
    
}
