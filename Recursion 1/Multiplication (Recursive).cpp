int multiplyNumbers(int m, int n) {

if(n==1)
    return m;
return m+multiplyNumbers(m,n-1);
}
