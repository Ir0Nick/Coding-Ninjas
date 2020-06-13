
void inplaceHeapSort(int input[], int n){
int hend = 1;
    while(hend < n)
    {
        	int ci = hend;
        	
        while(ci>0)
        {
            	int pi = (ci-1)/2;
            	if(input[ci] < input[pi])
                {
                    int temp = input[ci];
                    input[ci]= input[pi];
                    input[pi]= temp;
                }
            	else break;
            	ci = pi;
            
        }
    	hend++;
    }
    hend--;
   while(hend>0)
    {
        int temp = input[0];
        input[0]= input[hend];
        input[hend]= temp;
        hend--;
        int pi = 0;
        int lci, rci;
        while(pi<hend)
        {
            lci = 2*pi +1;
            rci = lci + 1;
            if(lci<hend)
            {
                int min = (input[lci]>input[rci])?rci:lci;
                if(input[pi]> input[min])
                {
                    int m = input[pi];
                    input[pi]= input[min];
                    input[min]= m;
                }
                else break;
                pi = min;
            }
            else if(lci==hend&&(input[pi]>input[lci]))
            {
                
                    int y = input[pi];
                    input[pi] = input[lci];
                    input[lci] =y;
                    pi = lci;
            }
            else break;
            
        }
      //  hend--;
    }

}
