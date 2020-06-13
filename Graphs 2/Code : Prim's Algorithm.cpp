#include<climits>
#include <iostream>
using namespace std;


int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
	int** edges = new int*[V];
    int* parent = new int[V];
    int* weight = new int[V];
  	int * visited = new int[V];
    for(int i=0;i<V;i++)
    {	parent[i]= -1;
        weight[i] = INT_MAX;
        edges[i] = new int[V];	
        visited[i] = 0;
        for(int j=0;j<V;j++)
            edges[i][j] = 0;
    }
    for(int i=0;i<E;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edges[a][b] = c;
        edges[b][a] = c;
        
    }
    weight[0]=0;
    int count =0;
    while(count<V-1)
    {   int m = INT_MAX,pos = -1;
     
        for(int i=0;i<V;i++)
        {	
            if(!visited[i])
            {
                if(weight[i]<m)
                {
                    m = weight[i];
                    pos = i;
                }
            }
        }	
     	visited[pos] =1;
     for(int i=0;i<V;i++)
     {
         if(visited[i])
             continue;
         if(edges[i][pos]!=0&&edges[i][pos]<weight[i])
         {
             parent[i] = pos;
             weight[i] = edges[i][pos];
         }
     }
     count++;
    }
    for(int i=1;i<V;i++)
    {
        if(i<=parent[i])
            cout<<i<<' '<<parent[i]<<' '<<weight[i]<<'\n';
        else
            cout<<parent[i]<<' '<<i<<' '<<weight[i]<<'\n';
    }
    
  return 0;
}
