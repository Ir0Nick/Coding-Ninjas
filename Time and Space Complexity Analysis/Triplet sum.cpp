// arr - input array
// size - size of array
// x - sum of triplets

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
void FindTriplet(int arr[], int size, int x) {
    
    mergeSort(arr,0,size-1);
    int i=0;
    while(i<size-1)
    {   int first=arr[i];
        int sec;
        for(int j=i+1;(j<size-1);j++)
        {
            sec=arr[j];
            
               for(int k=j+1;(arr[k]<=x-(first+sec))&&k<size;k++)
               {
                   if(first+sec+arr[k]==x)
                       cout<<first<<' '<<sec<<' '<<arr[k]<<'\n';
               }
    
        }
     i++;
   }
}
