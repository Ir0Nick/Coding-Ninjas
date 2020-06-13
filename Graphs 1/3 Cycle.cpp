int solve(int n,int m,vector<int>u,vector<int>v)
{
	int count =0;
    int**edges = new int*[n+1];
    
    for(int i=1;i<=n;i++)
    {
        edges[i] = new int[n+1];
        for(int j=1;j<=n;j++)
            edges[i][j]=0;
    }
    for(int i=0;i<u.size();i++)
    {
        edges[u[i]][v[i]] =1;
        edges[v[i]][u[i]] =1;
        
    }
    
    for(int i=1;i<=n-2;i++)
    {
        for(int j = i+1;j<=n+1;j++)
        {
            if(edges[i][j])
            {
                for(int k=j+1;k<=n;k++)
                {
                    if(edges[i][k])
                    {
                        if(edges[j][k])
                            count++;
                    }
                }
            }
        }
    }
    
    return count;
}
