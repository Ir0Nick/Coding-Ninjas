
double geometricSum(int k) {
   if(k==0)
       return 1;
    double den =1;
    for(int i=1;i<=k;i++)
        den*=2;
    double prev =geometricSum(k-1);
    double pres =double(1/den);
  // printf("%d",pres);
    return prev+pres;
   
}
