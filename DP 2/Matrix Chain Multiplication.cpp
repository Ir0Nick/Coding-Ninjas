#include<climits>
#include<algorithm>
int mcm(int* p, int n){
int ** arr = new int*[n+1];

for(int i=1;i<=n;i++)
    arr[i] = new int[n+1];

for(int i = 1;i<=n ; i++)
    arr[i][i] = 0;
    
	for(int t = 1; t<n;t++)
	{	
        for(int i = 1;i<n;i++)
        {	
            if( i + t >n)
                continue;
            int mn = INT_MAX;
            int sum = 0;
            for(int k = i; k<i+t ;k++)
            {
                sum = arr[i][k] + arr[k+1][i+t] + p[i-1]*p[k]*p[i+t];
                mn = min(sum,mn);
            }
            arr[i][i+t] = mn;
        }
    
	}
    
    return arr[1][n];
}

