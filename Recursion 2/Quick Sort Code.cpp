int partition(int input[],int si, int ei)
{ int count=0;
 for(int i=si+1;i<=ei;i++)
  if(input[i]<=input[si])
     count++;
 
   int temp=input[si];
   input[si]=input[si+count];
   input[si+count]=temp;
int i=si;int j=ei;
 while(i<(si+count)||j>(si+count))
 {
     if(input[i]<=input[si+count])
        i++;
     else if(input[j]>input[si+count])
         j--;
     else
     {
         int t=input[i];
         input[i]=input[j];
         input[j]=t;
         i++;
         j--;
     }
     
}
 return si+count;
       
}


void quickSort(int input[],int si, int ei)
{
    if(si==ei||si>ei)
        return;
    int p=partition(input,si,ei);
    quickSort(input,si,p-1);
    quickSort(input,p+1,ei);
    
}



void quickSort(int input[], int size)
{
  quickSort(input,0,size-1);
    
}
