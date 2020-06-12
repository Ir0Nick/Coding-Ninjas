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

node* midpoint_linkedlist(node *head)
{node *slow=head,*fast=head->next;
 while(fast!=NULL&&fast->next!=NULL)
 {
     slow=slow->next;
     fast=fast->next->next;
 }
 return slow;
}
