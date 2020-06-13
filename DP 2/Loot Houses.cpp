#include<climits>
using namespace std;
int getMaxMoney(int arr[], int n){
int *a = new int[n];
    
    a[0]= arr[0];
    a[1] = max(arr[0],arr[1]);
   
    for(int i =2;i<n;i++)
    {
        int s1 = a[i-1];
        int s2 = a[i-2]+arr[i];
     
        a[i] =max(s1,s2); 
    }

return a[n-1];
}
