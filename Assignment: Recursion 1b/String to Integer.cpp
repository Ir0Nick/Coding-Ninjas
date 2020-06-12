int stringToNumber(char input[]) {
    // Write your code here
if(input[1]=='\0')
{
    return input[0]-48;
    
}
  
int next=stringToNumber(input+1);
    int temp=next,q,digits=0;
    for(q=1;input[q]!='\0';q++);
    q--;
    while(temp!=0)
    {
        temp= temp/10;
        digits++;
    }
    
    int i=1;
    while(int(next/i)>0)
        i*=10;
    if(input[0]==0)
        i=i*10;
    if(digits==q)
    return (input[0]-48)*i+next;
    else 
    {  int factor=1;
        for(int i=q-digits;i>0;i--)
            factor*=10;
        
        return (input[0]-48)*factor*i+next;
    }
}


