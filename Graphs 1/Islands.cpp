
#include<queue>

int print(int**edges,int* visited,int n, int si)
{	if(n==0)
    return 0;
    int*temp = new int[n+1];
    for(int i=1;i<=n;i++)
    {
        temp[i] = visited[i];
    }
 
    queue<int> q;
    q.push(si);
    visited[si] = 1;
    
    while(q.size()!=0)
    {   
        int num = q.front();
      
        q.pop();
       
        for(int i=1;i<=n;i++)
        {  
            if(visited[i])
                continue;
            if(edges[num][i])
            {   if(!visited[i])
            	{
                q.push(i);
                visited[i] = 1;
                
                }
                
            }
        }
        
    }
 int count=0;
    for(int i=1;i<=n;i++)
        if(visited[i]&&!temp[i])
			count=1;
return count;
    
}




int solve(int n,int m,vector<int>u,vector<int>v)
{
    int **edges = new int*[n+1];
    int *visited=new int[n+1];
    for(int i=1;i<=n;i++)
   {  visited[i] =0;
        edges[i] = new int[n+1];
        for(int j =1;j<=n;j++)
        {
            
            edges[i][j] = 0;
           
            
        }
        
    }
   for(int i=0;i<u.size();i++)
    {
       edges[u[i]][v[i]]=1;
       edges[v[i]][u[i]] =1;
    }
              int mx =0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        { 
            int count = print(edges,visited,n,i);
    		
                mx ++;
        }
    }
 return mx;
}
