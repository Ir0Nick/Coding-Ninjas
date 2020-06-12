#include <string.h>
using namespace std;



void printAllPossibleCodes(string input, string output) 
{
    if(input.empty())
    {
        cout<<output<<'\n';
        return;
    }
     char ch1 = 48 + int(input[0]);
    
    printAllPossibleCodes(input.substr(1),output+ch1);
    if(input[1]!='\0')
    {
        int num = (input[0]-48)*10 + (input[1]-48); 
        if(num>0&&num<=26)
 			   {   char ch2= 96 +num; 
                   printAllPossibleCodes(input.substr(2),output+ch2);
               }
    }
    
   
}


void printAllPossibleCodes(string input) 
{
  string output;   
  printAllPossibleCodes(input,output); 

}

