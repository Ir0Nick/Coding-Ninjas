#include<unordered_map>
using namespace std;

int highestFrequency(int *input, int n){	 
    int mf=-1,max;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        if(++m[input[i]] > mf)
        {
            max = input[i];
            mf= m[input[i]];
        }
    }
     	return max;
     	
}

