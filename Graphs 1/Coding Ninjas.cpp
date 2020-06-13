#include<string>
bool helper(char Graph[][MAXN],int**visited,int N, int M,int r, int c, string s)
{
    if(s.size()==0)
        return true;
    for(int i = -1; i<2;i++)
    {
        for(int j = -1 ;j<2;j++)
        {	if(  r+i>=N||r+i<0||c+j<0||c+j>=M)
            	continue;
            
         	if(visited[i+r][j+c])
                continue;
            if(Graph[i+r][j+c] == s[0])
            {
                	visited[r+i][c+j] = 1;
                if(helper(Graph,visited,N,M,r+i,c+j,s.substr(1)))
                return true;
                else
                    visited[r+i][c+j] = 0;
            }
        }
    }
        return false;
}

int solve(char Graph[][MAXN],int N, int M)
{
    string s = "CODINGNINJA";
    int **visited =new int*[N];
    for(int k=0;k<N;k++)
        visited[k] = new int[M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            visited[i][j] = 0;
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(s[0]==Graph[i][j] && !visited[i][j])
            {
                visited[i][j] = 1;
                if(helper(Graph,visited,N,M,i,j,s.substr(1)))
                    return true;
                else
                    visited[i][j] = 0;
            
            }
        }
    
    }
    return false;
}
