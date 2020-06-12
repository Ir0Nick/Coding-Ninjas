
int countZeros(int n, bool start) {
   
	if(n==0)
	{
        if(start)
        return 1;
    	return 0;
	}
    
    if(n%10==0)
        return 1+ countZeros(n/10,false);
    else 
        return 0 +countZeros(n/10,false);
}

int countZeros(int n)
{
  return countZeros( n,true);
}
