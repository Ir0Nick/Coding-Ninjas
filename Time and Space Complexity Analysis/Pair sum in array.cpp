
void merge(int arr[],int si, int mid, int ei)
{
       int size=(ei-si+1);
       int * c= new int[size];
       int i=si,j=mid+1,k=0;
       while(i<mid+1&&j<ei+1)
       {
              if(arr[i]<arr[j])
              {
                     c[k++]=arr[i++];
              }
              else
              {
                     c[k++]=arr[j++];
              }
       }
       if(i==mid+1)
       {
              for(int x=j;x<=ei;x++)
              {
                     c[k++]=arr[x];
              }
              
       }
       else
       for(int x=i;x<=mid;x++)
       c[k++]=arr[x];
       for(int i=0;i<size;i++)
       arr[si+i]=c[i];
}


void mergeSort(int arr[],int si, int ei)
{
       if(si<ei)
       {
              int mid=(si+ei)/2;
              mergeSort(arr,si,mid);
              mergeSort(arr,mid+1,ei);
              merge(arr,si,mid,ei);
       }
}


void pairSum(int input[], int size, int x) {
  mergeSort(input,0,size-1);


for(int i=0;input[i]<x;i++)
{
    int k=x-input[i];
    int end=size-1;
    while(input[end]>=k&&i<end)
    {
        if(k==input[end])
        cout<<input[i]<<' '<<k<<'\n';
        end--;
    }
}
}
