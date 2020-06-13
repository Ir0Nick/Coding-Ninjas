#include<unordered_map>
#include<string>
using namespace std;
char* uniqueChar(char *str){
    int i=0;
    unordered_map<char,bool>map;
    unordered_map<char,int>::iterator it;
    while(str[i]!='\0')
        	map[str[i++]]=true;
    char*s;i=0;int j=0;
    for(i=0;str[i]!='\0';i++)
    {  if(map[str[i]])
    	{  s[j++]= str[i];
         	map[str[i]]=false;
        }
    }
    s[i]='\0';
    return s;
}
