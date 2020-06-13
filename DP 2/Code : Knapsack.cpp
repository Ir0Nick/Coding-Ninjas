#include <iostream>
using namespace std;
int knapsack(int* weight, int* value, int n, int maxWeight){
if(n==0||maxWeight<=0)
    return 0;
    if(weight[0]<=maxWeight){
    int a = knapsack(weight+1, value+1,n-1,maxWeight);
    int b = value[0] + knapsack(weight+1,value+1,n-1,maxWeight-weight[0]);
        return max(a,b);
        
    }
    else
    {
        return knapsack(weight+1,value+1,n-1,maxWeight);
    }

}

