#include<cmath>
int allWays(int x, int n) 
{
	/*int * arr = new int[x+1];
	arr[0] = 0;
    arr[1] = 1;
    for(int i = 2;i<=x;i++)
    {	int count = 0;
        int j = 1;
        while((x-pow(j,n))>=0)
        {		if(pow(j,n)==x-pow(j,n))
        		{	
            		if(arr[int(pow(j,n))])
            		count+= arr[int(pow(j,n))]-1;
        		}
                else if((x-pow(j,n)==0))
                {
             		count++;       
                }
            	else if(arr[x-int(pow(j,n))]>0)
                { 
                 // count+= arr[x-int(pow(j,n))];
                    if(j == 1)
                    {
                        count+= arr[x-int(pow(j,n))]
                    }
                    int m = x-2*int(pow(j,n));
                    int k = int(pow(j,n));
                    int flag = (m>=0);
                    while(m>0&&flag)
                    {
                        if(arr[m]==0)
                            flag = false;
                        else
                        {
                    		m-=k;
                        }
                    }
                    if(!flag)
                    {
                        count+= arr[x-int(pow(j,n))];
                    }
                    
                    //if(!(x-2*int(pow(j,n))>0&&arr[x-2*int(pow(j,n))]>0))
                   // count+= arr[x-int(pow(j,n))];
                }
            j++;
        }
     arr[i]= count;
    }
    return arr[x];*/
    
     int* temp = new int[x + 1];
    temp[0] = 1;
    temp[1] = 1;
    int end = (int)pow(x, 1.0/n);
    for(int i = 2; i <= end; i++) {
        int value = (int)pow(i, n);
        for(int j = x; j > value - 1; j--) {
            temp[j] += temp[j-value];
        }

    }
    return temp[x];
    
    
    
}
