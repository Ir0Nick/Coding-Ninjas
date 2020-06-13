#include<unordered_map>
using namespace std;

long fact(int x)
{if(x==0)
    return 1;
 return x*fact(x-1);
}

void printPairs(int *input, int n, int k) {
	unordered_map<int,int> map;
    
    for(int i=0; i<n;i++)
       map[input[i]]++;
    int d = k;
    for(int i=0;i<n;i++)
    {   if(map[input[i]]==0)
        continue;
        if(d==0)
        {
            int count = map[input[i]];
            for(int j=0;j<fact(count-1);j++)
                cout<<input[i]<<' '<<input[i]<<'\n';
           
            map[input[i]]=0;
            
        }
        else{
        int small = map[input[i]-d];
        int big = map[input[i]+d];
        int curr = map[input[i]];
        for(int j=0;j<small*curr;j++)
            cout<<input[i]-d<<' '<<input[i]<<'\n';
        for(int j=0;j<big*curr;j++)
            cout<<input[i]<<' '<<input[i]+d<<'\n';
    	map[input[i]]=0;
    
        }
    }
    
    

}


