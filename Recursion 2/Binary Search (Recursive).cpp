// input - input array
// size - length of input array
// element - value to be searched
int binarySearch(int input[], int size, int element) {
    if(size==0||size<0)
    {
        return -1;
    }
    if(size==1)
    { if(element==input[0])
            return 0;
        else 
            return-1;
    }
    int mid = (size%2==0)? size/2: (size+1)/2;
    
    if(input[mid-1]==element)
        return mid-1;
    else if(element<input[mid-1])
        return binarySearch(input,mid-1,element);
    else if(element>input[mid-1])
    {   if(binarySearch(input+mid,size-mid,element)!=-1)
        return mid+binarySearch(input+mid,size-mid,element);
        else return -1;
    }
}
