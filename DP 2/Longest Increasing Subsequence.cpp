
using namespace std;

 int lis(int arr[], int n) {
		int * a = new int[n];
     a[0]=1;
     for(int i=1;i<n;i++)
     {
         int j = i-1;
         a[i] = 1;
         while(j>=0)
         {
             if(arr[j]<arr[i])
             {   if(a[j]>=a[i])
                  a[i]=1+a[j];
             }
             j--;
         }
     }
		int mx = 1;
     for(int i = 0;i<n;i++)
		mx = max(mx,a[i]);
     return mx;

 }
