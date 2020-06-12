int allIndexes(int input[], int size, int x, int output[]) {

    if(size==0)
        return 0;

   int i=allIndexes(input,size-1,x,output);
  if(input[size-1]==x)
  {
      if(i==0)
      {
          output[0]=size-1;
            return 1;      
      }
      else
      {
          output[i]=size-1;
          return 1+i;
      }
  }
   else
       return i;
}
    
