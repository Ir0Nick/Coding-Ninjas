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
node *reverse_linked_list_rec(node *head)
{
   if(head->next==NULL||head==NULL)
   {   if(head->next==NULL)
       return head;
   
   }
    node* temp =reverse_linked_list_rec(head->next);
    node * ptr=head->next;
    ptr->next=head;
    head->next=NULL;
    head= temp;
    return head;
    
    
}

