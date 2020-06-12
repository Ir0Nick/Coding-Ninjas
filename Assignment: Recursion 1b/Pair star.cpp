// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {
    // Write your code here
if(input[1]=='\0')
{
    return;
}
    
if(input[0]==input[1])
{   int i;
    for( i=0;input[i]!='\0';i++);
    for(int j=i;j>=1;j--)
      input[j+1]=input[j];
     input[1]='*';
}
    pairStar(input+1);
}
