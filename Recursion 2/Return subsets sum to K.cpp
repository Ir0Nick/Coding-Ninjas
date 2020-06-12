void delrow(int output[][50],int i,int&m)
{
       for(int r=i;r<m-1;r++)
                                   
                                   for(int c =0;c<=output[r+1][0];c++)
                                       
                                       output[r][c]=output[r+1][c];
                                   
                                   m--;
                                output[m][0]=0;
}

int subsetSumToK(int input[], int n, int output[][50], int k,int&m) {

    if(n==0)
    {
        if(m==0)
             return 0;
    
        else
        {
           /* for(int i=0;i<m;)
            {     int sum=0;
                    for(int j=1;j<=output[i][0];j++)
                        {
                            sum+=output[i][j];
                         }
       
                    if(sum==k)
                          i++;
              
                    else
                          {
                               for(int r=i;r<m-1;r++)
                                   
                                   for(int c =0;c<=output[i+1][0];c++)
                                       
                                       output[r][c]=output[r+1][c];
                                   
                                   m--;
                                 output[m][0]=0;
                                   
                         }
            
            */
            return m;

        }
    
 }
    
int digit=input[0];
    
    int s=0,ne=0;int t=m;
    for(int i=0;i<t;i++)
    {  s=0;
        for(int j=1;j<=output[i][0];j++)
        
            s+=output[i][j];
        if(s+digit<=k)
        {   m++;
            output[m-1][0]=output[i][0]+1;
            for(int i1=1;i1<=output[i][0];i1++)
            {
                output[m-1][i1]=output[i][i1];
            }
          output[m-1][output[i][0]+1]=digit;
        }
    }    
    if(digit<=k)
    {    output[m][0]=1;
    output[m][1]=digit;
    m++;
    }
    

    return subsetSumToK(input+1, n-1,output, k,m);
    
}

int subsetSumToK(int input[], int n, int output[][50], int k)
{ int m=0;

 m=subsetSumToK(input, n,output,  k,m);
 for(int i=0;i<m;)
 {int sum=0;
  for(int j=1;j<=output[i][0];j++)
  sum+=output[i][j];
  if(sum==k)
  i++;
  else
  delrow(output,i,m);
  
 }
return m;
}
