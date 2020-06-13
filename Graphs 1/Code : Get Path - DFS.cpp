#include <iostream>
#include<vector>
using namespace std;
bool getPath(int**edges,int* visited,int n,int sv,int m,vector<int>&v)
{  // vector<int> t =v;
    v.push_back(sv);
    visited[sv] = 1;
    if(sv==m)
    {  visited[m] =1;
         for(int i =0;i<v.size();i++)
            cout<<v[v.size()-i-1]<<' ';
        return true;
    }
 /*   else if(edges[sv][m])
    { visited[m] = 1;
        v.push_back(m);
        for(int i =0;i<v.size();i++)
            cout<<v[v.size()-i-1]<<' ';
        return true;
    }
   */ bool found = 0;
        for(int i =0;i<n;i++)
        {
            if(visited[i])
                continue;
            if(edges[sv][i])
            { // v.push_back(i);
                found = (getPath(edges,visited,n,i,m,v));
               
                if(found)
                    return true;
            }
        }
  v.pop_back();
 	return false;
    
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
    vector<int> v;
   getPath(edges,visited,V,v1,v2,v);
  
  return 0;
}
