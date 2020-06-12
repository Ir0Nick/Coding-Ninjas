// Change in the given string itself. So no need to return or print anything

void shift1(char input[])
{
    int i=-1;
    do{ i++;
        input[i]=input[i+1];
    }while(input[i]!='\0');
    
}



void removeX(char input[]) {
   if(input[0]=='\0')
       return;
    if(input[0]=='x')
    { //int i;
       shift1(input);
        removeX(input);
    }
    else
    removeX(input+1);
}
