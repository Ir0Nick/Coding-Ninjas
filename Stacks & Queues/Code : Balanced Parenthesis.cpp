#include<stack>

bool isopbracket(char ch)
{
    if(ch=='('||
      ch == '{'||
       ch == '[')
        return true;
    return false;
}



bool checkBalanced(char *exp) {

    stack<char> s;
    int i=0;
    while(exp[i]!='\0')
    {
        	if(isopbracket(exp[i]))
            {
                s.push(exp[i]);
            }
            else if(exp[i]=='}')
            {   if(s.empty())
                return false;
                if(s.top()=='{')
                    s.pop();
                else
                    return false;
            }
        else if(exp[i]==']')
            {if(s.empty())
                return false;
                if(s.top()=='[')
                    s.pop();
                else
                    return false;
            }
        else if(exp[i]==')')
            {if(s.empty())
                return false;
                if(s.top()=='(')
                    s.pop();
                else
                    return false;
            }
        i++;
            
    }
   
    if(!(s.empty()))
        return false;
    return true;
    
}  
