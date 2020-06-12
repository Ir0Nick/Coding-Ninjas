#include<stack>

int countBracketReversals(char input[]){
	int l=0;
    while(input[l]!='\0')
        l++;
    if(l%2==1)
        return -1;
    		if(input[0]=='\0')
       			 return 0;
  
    stack<char> s;
    int i=0;
    
    
    while(input[i]!='\0')
    {
    	    	if(input[i]=='{')
                {
                    s.push('{');
                }
            else if(input[i]=='}')
            {
                	if(!(s.empty())&&s.top()=='{')
                        s.pop();
               
                	else 
                    {
                        s.push('}');
                    }
                        
            }
        i++;
    }
    if(s.empty())
        return 0;
    
  if(s.size()==2)
    {
      char cj = s.top();
      s.pop();
      if(cj!=s.top())
          return 2;
      else
          s.push(cj);
        
    }
    int num =(s.size()%2==0)?s.size()/2:-1;
    return num;

}
