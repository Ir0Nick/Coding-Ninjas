bool checksequenece(char large[] , char*small) {
if(small[0]=='\0')
	return true;
    
    int i=0;
    char ch = small[0];
    while(large[i]!=ch&&large[i]!='\0')
        i++;
    if(large[i]=='\0')
        return false;
    else 
        return checksequenece(large+i+1,small+1);
        
}
