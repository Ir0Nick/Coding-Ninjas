#include<climits>
#include <iostream>
using namespace std;


int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
	 int * dis = new int[V];
     int ** edges =  new int*[V];
      int* visited = new int[V];
     for(int i=0;i<V;i++)
     {  visited[i] = 0;
        dis[i] =INT_MAX;
        edges[i]= new int[V];
        for(int j=0;j<V;j++)
        {
            edges[i][j] =0;     
        }
     }
    for(int i=0;i<E;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edges[a][b] =c;
        edges[b][a] =c;
        
    }
    
    dis[0]=0;
    int count = 0,p=0;
    while(count<V-1)
    {   int m = INT_MAX,pos = -1;
     
        for(int i=0;i<V;i++)
        {	
            if(!visited[i])
            {
                if(dis[i]<m)
                {
                    m = dis[i];
                    pos = i;
                }
            }
        }	
     	visited[pos] =1;
    	for(int i=0;i<V;i++)
    	{	
        	if(visited[i])
                continue;
            if(edges[pos][i])
            {
                if(dis[i]>dis[pos]+edges[pos][i])
                    dis[i] = dis[pos]+edges[pos][i];
            }
    	}
     count++;
     
    }
    for(int i=0;i<V;i++)
    {
        cout<<i<<' '<<dis[i]<<'\n';
    }
    
  return 0;
}
