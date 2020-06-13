#include<vector>
#include<queue>
#include <iostream>
#include<unordered_map>
using namespace std;

void getPath(int**edges,int* visited, int n, int v1, int v2)
{	unordered_map<int,int> map;
    queue<int> q;
    q.push(v1);
    visited[v1] = true;
    map[v1] = -1;
    bool found =0;
    while(q.size()!=0)
    {
        
        int num  = q.front();
        q.pop();
      
        for(int i=0; i<n;i++)
        {
            if(visited[i])
                continue;
            if(edges[num][i])
            {   map[i] = num;
                q.push(i);
                visited[i] = 1;
             if(i == v2)
             {	found =1;
                 break;
            
             }
            }
            
        }
    }
    if(found)
    {
        int x = v2;
        while(map[x]!=-1)
        {
            cout<<x<<' ';
            x= map[x];
        }
        cout<<v1<<' ';
        
    }
    
}
int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;

  int **edges = new int*[V];
  int * visited = new int[V];
    for(int i=0;i<V;i++)
    {
         	visited[i]= 0;
        	edges[i] = new int[V];
        for(int j =0 ; j<V;j++)
            edges[i][j] = 0;
    }
    for(int i =0;i<E;i++)
    {
        int a,b;
        cin>>a>>b;
        edges[a][b] = 1;
        edges[b][a] = 1;
        
    }
    int v1, v2;
    cin>>v1>>v2;
    getPath(edges,visited,V,v1,v2);

  return 0;
}
