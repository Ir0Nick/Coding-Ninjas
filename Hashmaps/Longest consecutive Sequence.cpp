#include <vector>
#include<unordered_map>
#include<climits>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	
    unordered_map<int,bool>map;
    unordered_map<int,int>index;
    
    for(int i=0;i<n;i++)
    {
        map[arr[i]]=true;
     	if(!index.count(arr[i]))
        index[arr[i]]=i+1;
    }
   
   
    vector<int>v;
    int s=arr[0], l=1;
    for(int i=0;i<n;i++ )
    {     
        int start = arr[i];
        int length = 0;
        if(!map[arr[i]])
           continue;

        int back = 1;
        
        while(map.count(arr[i]+length))
        {
            map[arr[i]+length]= false;
            length++;
        }
        
        while(map.count(arr[i]-back))
        {  
            map[arr[i]-back]=false;
            start--;
            back++;
        }
        length+=back-1 ;
        
         if(l==length)
        	{
            	if(index[start]<index[s])
                   s= start;
        	}
        else if(length>l)
        {  
            l= length;
            s= start;
            
        } 
        
    }
    for(int i=0;i<l;i++)
        v.push_back(s+i);
    return v;
    
}
