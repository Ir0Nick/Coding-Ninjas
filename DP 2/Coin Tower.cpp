using namespace std;
string solve(int n, int b, int c)
{
	int* dp   = new int[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i =2;i<=n;i++)
    {
        if(dp[i-1]^1)
            dp[i] = 1;
        else if(i-b>=0&&dp[i-b]^1)
            dp[i]= 1;
        else if(i-c>=0&&dp[i-c]^1)
            dp[i] = 1;
        else dp[i]= 0;
    }
    string s;
    if(dp[n]==0)
        s= "Whis";
    else
        s= "Beerus";
    return s;
}
