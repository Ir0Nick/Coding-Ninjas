#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCostPath(int **input,int m, int n, int x, int y, int **arr)
{
    if( x==m-1 && y==n-1 )  
    {
        return input[x][y];
    }
    if(x+1<=m-1&&arr[x+1][y] == -1 )
        arr[x+1][y] = minCostPath(input,m,n,x+1,y,arr);
	
    if(x+1<m && y+1<n && arr[x+1][y+1] == -1 )
        arr[x+1][y+1] = minCostPath(input,m,n,x+1,y+1,arr);
    
    if(y+1<n && arr[x][y+1] == -1 )
        arr[x][y+1] = minCostPath(input,m,n,x,y+1,arr);
	
    if(x==m-1)
    {
        arr[x][y]= arr[x][y+1] + input[x][y];
        //sum+= input[x][y];
        return arr[x][y];
    }
    else if(y==n-1)
    {
        arr[x][y] = arr[x+1][y]+ input[x][y];
        
        return arr[x][y];
    }
    else
    {   
        arr[x][y]=min(arr[x+1][y],min(arr[x+1][y+1],arr[x][y+1]))+ input[x][y];
        return arr[x][y];
    }
           
}



int minCostPath(int **input, int m, int n) {
  int**arr = new int*[m];
    for(int i = 0;i<m;i++)
        arr[i] = new int[n];
    for(int i=0;i<m;i++)
    {
        	for(int j=0;j<n;j++)
        	{
            		arr[i][j] = -1;
        	}
    }
    return minCostPath(input,m,n,0,0,arr);
}
