
void printSubsetsOfArray(int input[],int size,int output[],int m)
{
    if(size==0)
    {
        for(int i=0;i<m;i++)
        { 
            cout<<output[i]<<' ';
        }
        cout<<'\n';    
        return;
    }
    
    int * temp= new int[m+1];
    for(int i=0;i<m;i++)
    {
        temp[i]=output[i];
        
    }
    temp[m]=input[0];
    printSubsetsOfArray(input+1,size-1,temp,m+1);
    printSubsetsOfArray(input+1,size-1,output,m);
    
    
}



void printSubsetsOfArray(int input[], int size) {

    int *a=new int[16];int m=0;
    printSubsetsOfArray(input,size,a,m);
}
