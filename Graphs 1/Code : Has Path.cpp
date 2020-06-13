#include <iostream>
using namespace std;
bool hpath(int**edges,int n,int sv, int b,int*visited)
{
	    if(edges[sv][b] ==1)
            return true;
    visited[sv] =1;
    bool found = 0;
    for(int i=0;i<n;i++)
    {
        if(i== sv)
            continue;
        if(edges[sv][i]&&!visited[i])
            if(hpath(edges, n,i,b,visited))
            {
                found =1;
                return found;
            }
    }

	return found;
}

int main() {
    int V, E;
    cin >> V >> E;
	int **edges = new int*[V];
    int * visited = new int[V];
    for(int i=0;i<V;i++)
    { visited[i] =0;
        edges[i] = new int[V];
        for(int j=0;j<V;j++)
            edges[i][j] = 0;
        
    }
    for(int i=0;i<E;i++){
    int a,b;
    cin>>a>>b;
	edges[a][b] =1;
    edges[b][a] =1;
  }
int v1,v2;
    cin>>v1>>v2;

    if(hpath(edges,V,v1,v2,visited))
        cout<<"true";
    else
        cout<<"false";

  return 0;
}
