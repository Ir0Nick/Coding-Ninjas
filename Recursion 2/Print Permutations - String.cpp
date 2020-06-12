#include <iostream>
#include <string>
using namespace std;

 
void printPermutations(string input, string output ={}){
if(input.empty())
{ cout<<output<<'\n';
 return;
}
    string substr;
    string temp;
    for(int i=0;i<input.size();i++)
    {  temp=output;
       
        char ch= input[i];
    //    cout<<"selecting :"<<input[i]<<'\n';
        temp+=ch;
        substr=input.substr(0,i)+input.substr(i+1);
    //   cout<<substr<<" for "<<temp<<'\n';
        printPermutations(substr,temp);
                
        
    }
    
}
