
/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/

class Polynomial {
   int cap;
    
    public:
    int *degCoeff;      // Name of your array (Don't change this)

  
   
    Polynomial()
    {
        degCoeff= new int[5];
        for(int i=0;i<5;i++)
            degCoeff[i]=0;
        cap=5;
    }
   
    Polynomial(Polynomial const & p)
    {
        degCoeff = new int[p.cap];
        cap=p.cap;
        for(int i=0;i<p.cap;i++)
            degCoeff[i] = p.degCoeff[i];
    }
 
    Polynomial(int * dc, int c)
    {
        cap=c;
        degCoeff = new int[c];
        for(int i=0;i<c;i++)
        {
            degCoeff[i] = dc[i];
        }
    }
    
    void setCoefficient(int deg, int coeff)
    {
        if(deg<cap)
        degCoeff[deg]=coeff;
        else
        {
            int size = cap; 
            while(size<=deg){
                size*=2 ; 
            }
            int *temp= new int[size];
            for(int i=0;i<size;i++)
            {
                if(i<cap)
                {
                    temp[i]=degCoeff[i];
                }
                else
                    temp[i]=0;
            }
      
            cap=size;
            temp[deg]=coeff;
            delete [] degCoeff;
            degCoeff = temp;
        
        }
    }   
    
    Polynomial operator+(Polynomial const &p)
    {   int size=(p.cap>cap)?p.cap:cap;
        int *temp = new int[size];
     for(int i=0;i<size;i++)
     {
         if(i<cap&&i<p.cap)
             temp[i]=p.degCoeff[i]+degCoeff[i];
        else if(i<cap)
            temp[i]=degCoeff[i];
         else temp[i]=p.degCoeff[i];
     }
     
     return Polynomial(temp,size);
    }
    
    Polynomial operator*(Polynomial const &p) const
    {   int size = p.cap+cap;
        int *temp =new int[size];
     for(int i=0;i<size;i++)
       temp[i]=0;
     for(int i=0;i<cap;i++)
     {
         for(int j=0;j<p.cap;j++)
         {
             temp[i+j] += degCoeff[i]*p.degCoeff[j];
         }
     }
     return Polynomial(temp,size);
     }
    
    Polynomial operator=(Polynomial const &p)
    {    //delete [] degCoeff;
        degCoeff = new int[p.cap];
        cap=p.cap;
        for(int i=0;i<p.cap;i++)
            degCoeff[i] = p.degCoeff[i];
        return * this ; 
        
    }
    Polynomial operator-(Polynomial const &p)
    {   int size=(p.cap>cap)?p.cap:cap;
        int *temp = new int[size];
     for(int i=0;i<size;i++)
     {
         if(i<cap&&i<p.cap)
             temp[i]=degCoeff[i]-p.degCoeff[i];
         else if(i<cap)
            temp[i]=degCoeff[i];
         else temp[i]=-1*(p.degCoeff[i]);
    
     }
     return Polynomial(temp,size);
    }
    void print()const
    {
        for(int i=0;i<cap;i++)
        {
            if(degCoeff[i]!=0)
            cout<<degCoeff[i]<<'x'<<i<<' ';
        }
        cout<<'\n';
    }
};
