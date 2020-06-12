int sumOfDigits(int n) {
    
return (n==0)?0:n%10+sumOfDigits(n/10);
}
