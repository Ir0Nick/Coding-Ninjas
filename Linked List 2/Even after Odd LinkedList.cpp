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

node* arrange_LinkedList(node* head)
{
  
  node*ptr=head,*eh,*et,*oh,*ot;
    oh=ot=eh=et=NULL;
    while(ptr!=NULL)
    {
           if(ptr->data%2==1)
        {
            if(ot==NULL)
            {
                oh=ot=new node(ptr->data);
                
                
            }
            else
            {
                ot->next =new node(ptr->data);
                ot = ot->next;
                
            }
            
        }
        else
        {
            if(eh==NULL){
                eh=et=new node(ptr->data);
           
                
            }
        else
            {
                et->next = new node(ptr->data);
                et = et->next;
                
            }
           
        }
         ptr=ptr->next;
         
    }
    if(oh==NULL)
        return eh;
    ot->next=eh;
    return oh;

}
    
