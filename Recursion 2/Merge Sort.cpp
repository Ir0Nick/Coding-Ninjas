
void merge(int arr[],int si, int mid , int ei)
{
  int size=ei-si+1;
    int *c=new int[ei-si+1];
    int i=si,j=mid+1,k=0;
    while(i<=mid&&j<=ei)
    { // cout<<"* ";
        if(arr[i]<arr[j])
            c[k++]=arr[i++];
        else
        { //cout<<"else ";
            c[k++]=arr[j++];
            
        }
    }
    if(j==ei+1)
    { // cout<<'i';
        for(int x=i;x<mid+1;x++)
    	c[k++]=arr[x];
        
    }
    else
    {//	cout<<"j ";
        for(int x=j;x<=ei;x++)
            c[k++]=arr[x];
        
    }
    for(int v=0;v<size;v++)
       { arr[v+si]=c[v];
    //   cout<<c[v]<<' ';
       }
   //    cout<<'\n';
}

void mergeSort(int arr[],int si,int ei)
{
    if(si<ei)
    {
        int mid = (si+ei)/2;
        mergeSort(arr,si,mid);
        mergeSort(arr,mid+1,ei);
        merge(arr,si,mid,ei);
    }
    
}
void mergeSort(int input[], int size){
	mergeSort(input,0,size-1);
}
