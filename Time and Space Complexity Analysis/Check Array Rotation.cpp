// arr - input array
// n - size of array

int FindSortedArrayRotation(int arr[], int n) {
int i=1;
    if (n==1)
        return 0;
    while(i<n)
    {
        if(arr[i]<arr[i-1])
        {
            return i;
        }
        i++;
    }

}
