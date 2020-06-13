using namespace std;
int findMaxSquareWithAllZeros(int** a, int row, int col){
    
    int** arr = new int*[row];
    for(int i=0;i<row;i++)
        arr[i] = new int[col];
    for(int i =0;i<col;i++)
        arr[0][i] = (a[0][i]==0);
   for(int i =0;i<row;i++)
        arr[i][0] = (a[i][0]==0);
    int mx =0;
    for(int i=1;i<row;i++)
    {
        	for(int j= 1;j<col;j++)
            {
                	if(a[i][j]==0)
                    {
                        arr[i][j] = min(arr[i-1][j-1],min(arr[i-1][j],arr[i][j-1]))+1;
                    }
                	else
                        arr[i][j] = 0;
                if(mx<arr[i][j])
                    mx = arr[i][j];
            }
    }
    return mx;
}
