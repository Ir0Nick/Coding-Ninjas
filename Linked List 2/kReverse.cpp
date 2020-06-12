//head is the head of the linked list, n is number of elements to be reversed
// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node* revll(node* h,int  n)
{    node * ptr = h;node* nh=NULL,*nt=NULL;
    int count=0;
    while(count<n&&ptr!=NULL)
    {
        node * x = new node(ptr->data);
        x->next=nh;
        nh=x;
        count++;
        ptr= ptr->next;
    }
    
   
      count=0;
      node* head=h;
      while(count<n&&head!=NULL)
      {
          head->data=nh->data;
          head=head->next;
          nh=nh->next;
          count++;
      }
  
 return h;
}





node* kReverse(node*head,int n)
{
   if(head==NULL)
   return head;
    
    head= revll(head,n);
 int count =0;
    node* ptr=head;
 while(ptr!=NULL&&count<n)
 {ptr=ptr->next;
  count++;}
    kReverse(ptr,n);
    return head;
    

}
