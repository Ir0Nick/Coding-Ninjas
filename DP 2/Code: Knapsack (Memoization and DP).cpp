
int knapsack(int* weights, int* values, int n, int maxWeight){

    int **arr = new int*[2];
    for(int i=0; i<=n;i++ )
        arr[i]= new int[maxWeight+1];
    for(int i = 0;i<=2 ;i++ )
    {
        for(int j= 0 ; j<=maxWeight + 1;j++)
        {
            if(i==0||j==0)
                arr[i][j] = 0;
            else 
                arr[i][j] = -1;
        }
    }
    
    int i = 0;
    while(i<n)
    {for(int j=1;j<=maxWeight+1;j++)
    	{	
        	if(weights[i]>j)
           		 arr[1][j] = arr[0][j];
      		else
       	 	{
              int v1 = values[i] + arr[0][j - weights[i]];
              int v2  = arr[0][j];
              arr[1][j] =  max(v1,v2);
        	}
    	}
       for(int x = 1;x<=maxWeight;x++)
       {
           arr[0][x] = arr[1][x];
       }
     i++;
    }
    return arr[0][maxWeight] ;   
    
    /*
    for(int i = 1; i<=n;i++)
    {
        for(int j = 1; j<=maxWeight;j++)
        {
            if(weights[i-1]>j)
            {
                arr[i][j] = arr[i-1][j];
            }
            else
            {
                int v1 = values[i-1] + arr[i-1][j - weights[i-1]];
                int v2  = arr[i-1][j];
                arr[i][j] =  max(v1,v2);
            }
        }
    }
    return arr[n][maxWeight];*/

}
