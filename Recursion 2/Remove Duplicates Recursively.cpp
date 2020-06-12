void shift(char input[])
{
    int i=0;
    for(i=0;input[i]!='\0';i++)
        input[i]=input[i+1];
    
}

void removeConsecutiveDuplicates(char *input) {

if(input[0]=='\0')
    return;
    
if(input[0]==input[1])
{  shift(input);
 removeConsecutiveDuplicates(input);
 
}
    else removeConsecutiveDuplicates(input+1);
    
    
    
}
