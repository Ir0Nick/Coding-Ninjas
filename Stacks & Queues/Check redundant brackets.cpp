#include<stack>
bool checkRedundantBrackets(char *input) {
	
    stack<char> s;
    int i=0;
    
    while(input[i]!='\0')
    {
        	if(input[i]==')')
            {
                if(s.top()=='(')
                    return true;
        		
                while(s.top()!='(')
                    s.pop();
                    s.pop();
                if(!(s.empty())&&s.top()=='('&&input[i+1]==')')
                    return true;
            
            }
        
         else
             
             s.push(input[i]);
    
        i++;
    }
    
    return false;
}
