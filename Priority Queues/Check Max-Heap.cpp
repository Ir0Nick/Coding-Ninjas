bool checkMaxHeap(int arr[], int n){

int lci , rci, pi = 0;
   
    for(int i =0;i<n;i++)
    {
        lci = 2*i+1;
        rci= lci+1;
        if(lci<n&&arr[i]<arr[lci])
            return false;
        if(rci<n&&arr[i]<arr[rci])
            return false;
    }

return true;


}
