
bool checkAB(char input[],bool start)
{   if(input[0]=='\0')
    return true;
    if(start)
    {
        if(input[0]=='a')
        {
            if(input[1]=='a'||input[1]=='\0'||(input[1]=='b'&&input[2]=='b'))
                return checkAB(input+1,start);
         
        }
        if(input[0]=='b'&&input[1]=='b')
        { 
          if(input[2]=='\0'||input[2]=='a')
              return checkAB(input+2,start);
           else return false; 
            
        }
        else return false;
    }
    else return false;




}

bool checkAB(char input[]) {
	
if(input[0]=='a'||input[0]=='\0')
{
    checkAB(input,true);
}
    else return false;
    
}

