// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array

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
void intersection(int input1[], int input2[], int size1, int size2) {
    mergeSort(input1,0,size1-1);
    mergeSort(input2,0,size2-1);
    int i=0,j=0;
    while(i<size1&&j<size2)
    {
      //  while(input1[i+1]==input2[i])
       //     i++;
     //   while(input2[j+1]==input2[j])
      //      j++;
        if(input1[i]==input2[j])
        { 
            cout<<input1[i]<<'\n';
            i++;j++;
        }
         else if(input1[i]<input2[j])
             i++;
        else
            j++;
    }

}
