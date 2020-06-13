#include <iostream>
#include<queue>
using namespace std;


void print(int**edges,int* visited,int n, int si)
{	int*temp = new int[n];
    for(int i=0;i<n;i++)
    {
        temp[i] = visited[i];
    }
 
    queue<int> q;
    q.push(si);
    visited[si] = 1;
    
    while(q.size()!=0)
    {   
        int num = q.front();
        //cout<<num<<' ';
        q.pop();
       
        for(int i=0;i<n;i++)
        {  
            if(visited[i])
                continue;
            if(edges[num][i]||edges[i][num])
            {   if(!visited[i])
            	{
                q.push(i);
                visited[i] = 1;
                
                }
                
            }
        }
        
    }
    for(int i=0;i<n;i++)
        if(visited[i]&&!temp[i])
	cout<<i<<' ';
    
}


int main() {
    int V, E;
    cin >> V >> E;
  int **edges = new int*[V];
  for(int i =0;i<V;i++)
  {	
      edges[i] = new int[V];
  		for(int j=0;j<V;j++)
            edges[i][j]=0;
  } 

    for(int i=0; i<E; i++)
    {
        int f ,s;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f]= 1;
    }
    int *visited = new int[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=0;
    }
    
    for(int i=0;i<V;i++)
        if(!visited[i]){
    print(edges,visited,V,i);
            cout<<'\n';
 
    }
    
  return 0;
}
