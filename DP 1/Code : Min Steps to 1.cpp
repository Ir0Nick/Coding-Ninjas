
#include<climits>
int countStepsTo1(int n){
if(n==1) return 0;
int d3,d2,d1;
    d3=d2=d1=INT_MAX;
    if(n%3==0)
        d3=1+countStepsTo1(n/3);
	if(n%2==0)
        d2=1+countStepsTo1(n/2);
    d1=1+countStepsTo1(n-1);
    return min(d1,min(d2,d3));
}
