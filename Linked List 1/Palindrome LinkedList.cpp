//head is the head of you linked list
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
bool check_palindrome(node* head)
{
   if(head==NULL)
   {return true;}
    node*sl,*l;
    l=head;
    while(l->next!=NULL)
    {
        sl=l;
        l=l->next;
    }
    if(head->data!=l->data)
        return false;
    sl->next=NULL;
    return check_palindrome(head->next);
}

