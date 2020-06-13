#include<iostream>
#include<cstring>
using namespace std;


int editDistance(string s1, string s2, int ** output)
{
	if(output[s1.size()][s2.size()]!=-1)
    { 
        return output[s1.size()][s2.size()];
    }
     if(s1.size()==0)
    {	output[s1.size()][s2.size()] =  s2.size();
        return s2.size();
    }
    if(s2.size()==0)
    {	output[s1.size()][s2.size()] =  s1.size();
        return s1.size();
    }
    if(s1[0]==s2[0])
    {
        output[s1.size()][s2.size()] = editDistance(s1.substr(1),s2.substr(1),output);
        return output[s1.size()][s2.size()];
    }
    else
    {
        int a = 1 + editDistance(s1.substr(1), s2.substr(1),output);
        int b = 1 + editDistance(s1.substr(1),s2,output);
        int c = 1 + editDistance(s1, s2.substr(1),output);
        output[s1.size()][s2.size()] = min(a,min(b,c));
        return output[s1.size()][s2.size()];
    }
}


int editDistance(string s1, string s2){

 int ** op = new int*[s1.size()+1];
    for(int i=0;i<=s1.size();i++)
    {
        op[i] = new int[s2.size()+1];
    }
    for( int i=0; i<=s1.size() ; i++)
    {
        for(int j=0;j<=s2.size();j++)
            op[i][j]=-1;
    }
    return editDistance(s1,s2,op);

}
