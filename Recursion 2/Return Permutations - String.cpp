#include <string>
using namespace std;

long int fact(int num)
{
    long int f=1;
   for(int i=1;i<=num;i++)
     f*=i;
    return f;
}
 
int returnPermutations(string input, string output[],int m,bool start=false)
{
if(input.empty())
{  if(start)
    return 0;
    else
    return 1;
}
    
    m = returnPermutations(input.substr(1),output,m);
    
   string* prevop = new string[m];
    for(int i=0;i<m;i++)
        prevop[i]=output[i];
        if(prevop[0].empty())
        {
               output[0]=input[0];
               return 1;
        }
        else
        {
     for(int i=0;i<m;i++)
    {  int j=i*(prevop[i].size()+1);
        for(;j<(i+1)*(prevop[i].size()+1);j++)
        { //  cout<<"copying "<<prevop[i]<<" to "<<j<<'\n';
            output[j]=prevop[i];
        }
    }
for(int a=0;a<m;a++)
{ for(int i=0;i<=prevop[a].size();i++)
   {   //cout<<"\nadding "<<prevop[a].substr(0,i)<<'+'<<input[0]<<'+'<<prevop[a].substr(i)<<'\n';
      output[a*(prevop[a].size()+1)+i]=prevop[a].substr(0,i)+input[0]+prevop[a].substr(i); 
   }
}
   return fact(prevop[0].size()+1);
        }

}


int returnPermutations(string input, string output[])
{int m=0;
return returnPermutations(input,output,m,true);
       
}
