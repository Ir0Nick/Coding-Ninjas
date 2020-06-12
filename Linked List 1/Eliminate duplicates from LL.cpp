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
node* eliminate_duplicate(node* head)
{ node* temp=head;
    while (temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
            temp->next=temp->next->next;
        else temp =temp->next;
    }
 return head;
}
