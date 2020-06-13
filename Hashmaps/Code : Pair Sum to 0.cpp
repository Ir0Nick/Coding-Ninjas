#include<unordered_map>
using namespace std;
void PairSum(int *input, int n) {	 
		unordered_map<int, int > m;
    for(int i=0;i<n;i++)
        m[input[i]]++;
     for(int i=0;i<n;i++){
         int s = m[input[i]];
         int n = m[-input[i]];
         for(int j=0;j<s*n;j++)
         {
             if(input[i]>0)
                 cout<<-(input[i])<<' '<<input[i]<<'\n';
             else
                 cout<<input[i]<<' '<<-(input[i])<<'\n';
         }
         m[input[i]]=0;
         m[-input[i]]=0;

    }
     	
}

