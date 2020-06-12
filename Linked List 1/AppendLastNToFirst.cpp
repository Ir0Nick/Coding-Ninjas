//head is the head of the linked list and n is  how many element you want to append from the last to the front
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

node* append_LinkedList(node* head,int n)
{
  node * temp= head;int count=0;
    while(temp->next!=NULL)
    {
        temp=temp->next;count++;
    }
    temp->next=head;
    int i=0;
    while(i<=count-n)
    {  if(i==count-n)
    { node * temp1 = head->next;
     head->next=NULL;
     head=temp1;
    }
     else
     {head=head->next;}
        i++;
    }
    return head;
}
