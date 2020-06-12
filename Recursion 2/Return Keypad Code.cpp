#include <string>
using namespace std;






int keypad(int num, string output[])
{   
      if(num==0){
              
       //output[0]='\0';
       return 1;}
      else if(num==1)
          return 0;
       else
       {      int n=keypad(num/10,output);
              
              int d=num%10,e;
              if(d==0||d==1)
              {
                  return 0;
              }
        else
              if(d==2||d==3||d==4||d==5||d==6||d==8)
              e=3*n;
              else if(d==7||d==9)
              e=4*n;
              
              for(int i=n;i<e;i++)
                 output[i]=output[i%n];
                  if(d==2)
                       {   
                             int i;
                            for( i=0;i<n;i++)
                                output[i]=output[i]+'a';
                            for(;i<2*n;i++)
                                output[i]=output[i]+'b';
                            for(;i<3*n;i++)
                               output[i]=output[i]+'c';
                              return 3*n;
                       }
                       
                else if(d==3)
                       {   
                             int i;
                            for( i=0;i<n;i++)
                                output[i]=output[i]+'d';
                            for(;i<2*n;i++)
                                output[i]=output[i]+'e';
                            for(;i<3*n;i++)
                               output[i]=output[i]+'f';
                              return 3*n;
                       }
               else if(d==4)
                       {   
                             int i;
                            for( i=0;i<n;i++)
                                output[i]=output[i]+'g';
                            for(;i<2*n;i++)
                                output[i]=output[i]+'h';
                            for(;i<3*n;i++)
                               output[i]=output[i]+'i';
                              return 3*n;
                       }         
               else if(d==5)
                       {   
                             int i;
                            for( i=0;i<n;i++)
                                output[i]=output[i]+'j';
                            for(;i<2*n;i++)
                                output[i]=output[i]+'k';
                            for(;i<3*n;i++)
                               output[i]=output[i]+'l';
                              return 3*n;
                       }
               else if(d==6)
                       {   
                             int i;
                            for( i=0;i<n;i++)
                                output[i]=output[i]+'m';
                            for(;i<2*n;i++)
                                output[i]=output[i]+'n';
                            for(;i<3*n;i++)
                               output[i]=output[i]+'o';
                              return 3*n;
                       }
               else if(d==7)
                       {   
                            int i;
                            for( i=0;i<n;i++)
                                output[i]=output[i]+'p';
                            for(;i<2*n;i++)
                                output[i]=output[i]+'q';
                            for(;i<3*n;i++)
                               output[i]=output[i]+'r';
                            for(;i<4*n;i++)
                               output[i]=output[i]+'s';
                              return 4*n;
                       }
               else if(d==8)
                       {   
                             int i;
                            for( i=0;i<n;i++)
                                output[i]=output[i]+'t';
                            for(;i<2*n;i++)
                                output[i]=output[i]+'u';
                            for(;i<3*n;i++)
                               output[i]=output[i]+'v';
                              return 3*n;
                       }
               else if(d==9)
                       {   
                             int i;
                            for( i=0;i<n;i++)
                                output[i]=output[i]+'w';
                            for(;i<2*n;i++)
                                output[i]=output[i]+'x';
                            for(;i<3*n;i++)
                               output[i]=output[i]+'y';
                            for(;i<4*n;i++)
                               output[i]=output[i]+'z';
                              return 4*n;
                       }
              
              
              
       }

}
