#include <string.h>
using namespace std;



int getCodes(string input, string output[10000], int  m=0) 
{   //cout<<"input :"<<input<<'\n';
   //cout<<"output :"<<output[m]<<'\n'; 
    if(input.empty())
    {
        return m+1;
    }
   string temp=output[m];
     output[m+1]=output[m].substr(0,output[m].size()-1);
    char ch1 = 48 + int(input[0]);
    output[m]+=ch1;
   
    m= getCodes(input.substr(1),output,m);
    if(input[1]!='\0')
    {
   		 int num = (input[0]-48)*10 + (input[1]-48); 
        if(num>0&&num<=26)
 			   {   char ch2= 96 +num; 
    			    output[m]=temp;
    //		   cout<<"\nadding "<<output[m]<<'+'<<ch2<<'\n';
   			  	output[m]+=ch2;
   			  	m = getCodes(input.substr(2),output,m);
			    }
    }
    return m;
    
}



