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
node* rev_linkedlist_itr(node* head)
{  
    node*last=head;
    while(last->next!=NULL)
        last=last->next;
    node*cf=last;
    while(head!=last)
    {
        node*ll=last->next;
        last->next = head;
        head=head->next;
        last->next->next=ll;
    }
    return head;
}

