int sumOfDigits(int n) {
    // Write your code here
return (n==0)?0:n%10+sumOfDigits(n/10);
}


