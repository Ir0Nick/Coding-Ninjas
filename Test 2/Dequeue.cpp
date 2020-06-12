/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/

class Deque {
    public:
    int * queue;
    int capacity,size;
    int f,r;

        Deque(int s)
    { capacity = s;
     queue = new int[s];
     f=-1; 
     r=-1;
     size= 0;
    }
    
   	void insertFront(int num) {
        if(size==capacity)
        {	cout<<"-1\n";
         	return;
        }
        else if(size==0)
        {
            queue[0] = num;
            size++;
            f= 0;
            r =0;
        }
        else
        {
            for(int i = r;i>=0;i--)
            {
                queue[i+1]=queue[i];
            }
            r++;
            size++;
            queue[0]= num;
        }
        
    }
    void insertRear(int num)
    {     if(size==capacity)
        {	cout<<"-1\n";
         	return;
        }
      else if(size==0)
        {
            queue[0] = num;
            size=1;
            f= 0;
            r =0;
        }
     else{
        queue[++r] = num;
        size++;
     }
    }
     
    void deleteFront()
    {  if(size==0)
        cout<<"-1\n";
     else if(size ==1)
     {
         size--;
         f = r = -1;
     }
     else{
           for(int i=0;i<r;i++)
               queue[i] = queue[i+1];
        size--;
     r--;}
    }
    
    void deleteRear()
    {  if(size==0)
        cout<<"-1\n";
      else if(size ==1)
     {
         size--;
         f = r = -1;
     }
        else{r--;
        size--;}
    }
    
    int getFront()
    {  if(size==0) return -1;
        return queue[0];
    }
   
    int getRear()
    { if(size==0) return -1;
        return queue[r];
    }
};








