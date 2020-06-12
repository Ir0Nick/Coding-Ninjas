void printSubsetSumToK(int input[], int size, int k,int output[],int osize)
{ 
    
    int sum=0;
   for(int i=0;i<osize;i++)
       		 sum+=output[i];
    if(size==0)
    {
        if(sum==k)
            for(int q=0;q<osize;q++)
            {
                cout<<output[q]<<' ';
            }
            cout<<'\n';
            return;
    }
 
    if(osize>0)
    {
    	
        if(sum==k)
        {
			for(int q=0;q<osize;q++)
            {
                cout<<output[q]<<' ';
            }
            cout<<'\n';
            return;
        }
        else if(sum>k)
            return;
    }
    int *temp=new int [osize+1];
    for(int i=0;i<osize;i++)
        temp[i]=output[i];
    temp[osize]=input[0];
    printSubsetSumToK(input+1,size-1,k,temp,osize+1);
    printSubsetSumToK(input+1,size-1,k,output,osize);

}




void printSubsetSumToK(int input[], int size, int k) {

int * output=new int [10000];
    int osize=0;
    printSubsetSumToK( input, size, k ,output,osize);

}

