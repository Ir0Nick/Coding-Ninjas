#include<climits>

int helper(char cake[NMAX][NMAX],int n, int**visited,int i, int j)
{   int count =0;
    for(int x= -1;x<2;x++)
    {
        if(x==0)
            continue;
        if(x+i<n&&x+i>=0&&cake[x+i][j]=='1'&&!visited[x+i][j])
        {   visited[x+i][j] = 1;
            count += 1+helper(cake,n,visited,i+x,j);
        }
        if(x+j<n&&x+j>=0&&cake[i][x+j]=='1'&&!visited[i][j+x])
        {
            visited[i][x+j] = 1;
            count+= 1 + helper(cake,n,visited,i,j+x);
        }
        
    }
    return count;
    
    
}

int solve(int n,char cake[NMAX][NMAX])
{
	int**visited = new int*[n];
    for(int i=0;i<n;i++)
    {
        visited[i]  = new int[n];
        for(int k=0;k<n;k++)
        {
            visited[i][k] =0;
            
        }
    }
    int m = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            	if(!visited[i][j]&&cake[i][j]=='1')
                {   visited[i][j] = 1;
                    int count = 1 + helper(cake,n,visited,i,j);
                	if(count>m)
                        m = count;
                }
        }
    }
    if(m==INT_MIN)
        return 0;
    
    return m;
}
