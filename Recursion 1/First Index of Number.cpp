int firstIndex(int input[], int size, int x) {
 if(size==0)
     return -1;
if(input[0]==x)
    return 0;
    
else 
{int f=firstIndex(input+1,size-1,x);
    return (f==-1)?-1: 1+f;
}}
