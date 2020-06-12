




/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers {
    int r,i;
    public:
    ComplexNumbers(int real, int im)
    {
        r=real;
        i=im;
    }
    void plus(ComplexNumbers a)
    {this->r+=a.r;
     this->i+=a.i;
    }
    void multiply(ComplexNumbers a)
    {
        int r=(a.r*(this->r))-(a.i*(this->i));
         int i=(a.r)*(this->i) + a.i*(this->r);
        this->r=r;
        this->i=i;
        
    }
    void print()
    {
        cout<<r<<' '<<"+ "<<'i'<<i<<'\n';
    }
};
