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

node* skipMdeleteN(node  *head, int M, int N) {
   node* temp,*ptr,*prev;
    temp= ptr = head;
    if(M==0&&N>0)
        return NULL;
    else if(M==0&&N==0)
        return NULL;
while(ptr!=NULL)
{  
    int count =0;
    while(count<M&&ptr!=NULL)
    {   prev=ptr;
        ptr=ptr->next;
        count++;
    }
   if (ptr==NULL)
       return head;
   temp= ptr;
   count =0;
   while(count<N&&temp!=NULL)
   {
       temp= temp->next;
       count++;
   }
prev->next=temp;
 ptr=prev->next; 
}
return head;
}
