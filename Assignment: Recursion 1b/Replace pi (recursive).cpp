// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
	// Write your code here
if(input[1]=='\0'||input[0]=='\0')
    return;
if(input[0]=='p'&&input[1]=='i')
{   int i;
    for( i=0;input[i]!='\0';i++);
   for(int j=i;j>=2;j--)
      input[j+2]=input[j];
    input[0]='3';
    input[1]='.';
    input[2]='1';
    input[3]='4';
   replacePi(input+3);
 
}
    else
        replacePi(input+1);
    
}


