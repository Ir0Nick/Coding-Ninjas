bool checkPalindrome(char ch[],int s, int e)
{
    if(s==e)
        return true;
    if(s==e-1)
    {
        return (ch[s]==ch[e]);
    }
    return ((ch[s]==ch[e])&&checkPalindrome(ch,s+1,e-1));
        
}

bool checkPalindrome(char input[]) {
if(input[1]=='\0')
    return true;
    int i=0;
    for( i=0;input[i]!='\0';i++);
    
  
  if(checkPalindrome(input,0,i-1))
     {
         return true;
     }
    else return false;

}
