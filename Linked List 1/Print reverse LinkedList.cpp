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

void print_linkedlist_spl(node*head)
{
  
    if(head->next==NULL)
    {    cout<<head->data<<' ';
    return;}
    print_linkedlist_spl(head->next);
    cout<<head->data<<' ';
}
