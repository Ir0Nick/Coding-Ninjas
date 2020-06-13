int helper(char board[][MAXN],int n, int m,int i, int j, int**visited)
{  visited[i][j] = 1;
 char ch = board[i][j];
    for(int x=-1;x<2;x++)
    {   
        if(i+x>=0&&i+x<n&&board[i+x][j]==ch&&!visited[i+x][j])
        {
            int num = 1+helper(board,n,m,i+x,j,visited);
            if(num>1)
                return num;
                
        }
         if(j+x>=0&&j+x<m&&board[i][j+x]==ch&&!visited[i][j+x])
         {
             int num = 1+helper(board,n,m,i,j+x,visited);
             if(num>1)
                 return num;
         }
    }
  int c= 0;
  for(int x= -1;x<2;x++)
  {
      if(i+x>=0&&i+x<n&&x!=0)
      {
          if(ch == board[i+x][j]&&visited[i+x][j])
              c++;
         
      }
      if(j+x>=0&&j+x<m&&x!=0)
      {
          if(ch == board[i][j+x]&&visited[i][j+x])
              c++;
      }
  }
 if(c>=2)
     return 1;
     
 visited[i][j] = 0;
 return 0;
}
int solve(char board[][MAXN],int n, int m)
{
	int**visited = new int*[n];
    for(int i=0;i<n;i++)
    {
        	visited[i] = new int[m];
			for(int j =0; j<m;j++)
                visited[i][j] = 0;
    }
    int num =0;
    for(int i=0;i<n;i++)
    {
        	for(int j=0;j<m;j++)
            {	
                	num = helper(board,n,m,i,j,visited);
             		if(num==0)
                        visited[i][j] = 0;
                    else if(num>=4)
                        return 1;
            }
    }
    
    return 0;
}
