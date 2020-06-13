// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array
#include<unordered_map>
void intersection(int input1[], int input2[], int size1, int size2) {
   
    unordered_map<int,int> m;
    
    for(int i=0;i<size1;i++)  
            m[input1[i]]++;
   
    for(int i=0;i<size2;i++)
    {
        if(m[input2[i]]>0)
        {  m[input2[i]]--;
           cout<<input2[i]<<'\n';		
        }
    }
}
