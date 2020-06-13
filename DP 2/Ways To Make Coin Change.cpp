#include<algorithm>
int countWaysToMakeChange(int denominations[], int numDenominations, int value){
    
int ** arr =  new int*[numDenominations+1];
    for(int i= 0;i<= numDenominations;i++)
    {
        arr[i]= new int[value+1];
        
    }
    for(int i=0;i<=numDenominations;i++)
    {
        arr[i][0] = 1;
        
    }
    for(int i =1;i<=value;i++)
    {
        arr[0][i] = 0;
    }
    for(int i= 1;i<= numDenominations;i++)
    {
        for(int j= 1;j<=value;j++)
        {	
            int sum =0;
            if(j-denominations[i-1]>=0)
                sum = arr[i][j-denominations[i-1]];
            arr[i][j] = sum + arr[i-1][j];
        }
    }
    return arr[numDenominations][value];

}
