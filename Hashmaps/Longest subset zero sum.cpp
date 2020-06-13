#include<unordered_map>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int* arr, int size){
  unordered_map<long,int> map;
    long sum=0;
    int l=0;
    map[0]=-1;
    for(int i=0;i<size;i++)
    {		
        	sum+=arr[i];
        	if(map.count(sum))
            {	if(i-map[sum]>l)
                l=i-map[sum];
            }
        	else
        	map[sum]=i;
    }
    return l;
}


