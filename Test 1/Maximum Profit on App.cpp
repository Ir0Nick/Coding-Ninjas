#include <bits/stdc++.h> 
#include<climits>


int maximumProfit(int budget[], int n) {
    sort(budget,budget+n);
    int profit = INT_MIN,sum,k;
    for(int i=0;i<n;i++)
    {
        	sum = budget[i]*(n-i);
        if(sum>profit)
        {
            profit = sum;
    	
        }
    }
    return profit;
}
