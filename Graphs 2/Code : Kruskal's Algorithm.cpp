#include<algorithm>
#include <iostream>
using namespace std;
int findparent(int x,int*arr)
{
	if(arr[x]==x)
        return x;
    return findparent(arr[x],arr);
}

class edge
{
    public:
 	int s;
 	int d;
 	int w;

};
int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
	edge * input = new edge[E];
    edge* output = new edge[V-1];
for(int i=0;i<E;i++)
{
    cin>>input[i].s>>input[i].d>>input[i].w;
}
    sort(input,input+E,[](const edge& lhs, const edge& rhs) {return lhs.w < rhs.w;});
        int*parents =new int[V];
    for(int i=0;i<V;i++)
        parents[i] = i;
    int p=0,count=0;
    while(count<V&&p<E)
    {
        
        if(findparent(input[p].s,parents)!= findparent(input[p].d,parents))
        {
            output[count++]=input[p];
            parents[findparent(input[p].s,parents)]=parents[input[p].d];
            
        }
        p++;
    }
    for(int i=0;i<V-1;i++){
     if(output[i].d>=output[i].s)
        cout<<output[i].s<<' '<<output[i].d<<' '<<output[i].w<<'\n';
    else
        cout<<output[i].d<<' '<<output[i].s<<' '<<output[i].w<<'\n';
    }
  return 0;
}
