#include<iostream>
using namespace std;
// arr - input array
// size - size of array
// d - array to be rotated by d elements

void reversearray(int arr[], int si, int ei)
{
    int size=ei-si+1;
     for(int i=0;i<(size)/2;i++)
     {
         int temp=arr[si+i];
         arr[si+i]=arr[ei-i];
         arr[ei-i]=temp;
     }
}

void Rotate(int arr[], int d, int size) {
  
reversearray(arr,0,d-1);
reversearray(arr,d,size-1);
reversearray(arr,0,size-1);

}	
