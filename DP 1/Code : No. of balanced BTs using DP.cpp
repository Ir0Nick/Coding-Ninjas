long binaryTreesOfHeightH(int h) {
    long* arr = new long[h+1];
    arr[0]=arr[1]= 1;
    for(int i=2;i<=h;i++)
    {
        long temp1= (arr[i-1]*arr[i-1])  %1000000007;
        long temp2= (arr[i-1]*arr[i-2]*2)%1000000007;
        arr[i]= (temp1+temp2)%1000000007;
    }
    return arr[h];
}

