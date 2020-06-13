#include<queue>
#include <iostream>
using namespace std;

bool isConnected(int**edges,int n,int* visited)
{	
    queue<int> q;
    q.push(0);
    visited[0] = 1;
    while(q.size()!=0)
    {	
        int num = q.front();
        visited[num] = 1;
        q.pop();
        for(int i=0;i<n;i++)
        {
            if(visited[i])
                continue;
            if(edges[num][i])
            {  //// cout<<i<<' ';
                visited[i]=1;
                q.push(i);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        { // cout<<i;
            return 0;
        }        
    }
    return true;
    
    
}	

int main() {
    int V, E;
    cin >> V >> E;
	int**edges =  new int*[V];
    int* visited = new int[V];
    for(int i=0;i<V;i++)
        {  visited[i]=0;
            edges[i] = new int[V];
        	for(int j=0;j<V;j++)
            {
                edges[i][j]= 0;
            }
        }
    for(int i=0;i<E ;i++)
    {
        int a, b;
        cin>>a>>b;
        edges[a][b] = 1;
        edges[b][a] = 1;
        
    }
    if(isConnected(edges,V,visited))
        cout<<"true";
    else cout<<"false";
  return 0;
}
