#include <iostream>
#include <vector>
using namespace std;

int editDistance(string s1, string s2){
	if(s1.size()==0)
        return s2.size();
    if(s2.size()==0)
        return s1.size();
    if(s1[0]==s2[0])
    {
        return editDistance(s1.substr(1),s2.substr(1));
    }
    else
    {
        int a = 1 + editDistance(s1.substr(1), s2.substr(1));
        int b = 1 + editDistance(s1.substr(1),s2);
        int c = 1 + editDistance(s1, s2.substr(1));
        return min(a,min(b,c));
    }
    
}
