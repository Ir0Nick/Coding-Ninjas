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

node* merge(node* h1, node *h2)
{  if(h1==NULL)
    return h2;
  else if(h2==NULL)
      return h1;
    node*fh,*ft;
    if(h1->data < h2->data)
    {
        fh=ft=h1;
        h1=h1->next;
        
    }
    else
    {
        fh=ft=h2;
        h2 = h2->next;
      
    }
 ft->next =NULL;
    while(h1!=NULL&&h2!=NULL)
    {
        if(h1->data < h2->data)
        {
            ft->next = h1;
            ft = ft->next;
            h1 = h1 ->next;
            ft->next = NULL;
        }
        else
        {
            ft->next =h2;
            ft = ft->next;
            h2 = h2->next;
            ft->next =NULL;
        }
    }
    if(h1!=NULL)
        while(h1!=NULL)
        {
            ft->next = h1;
			ft = ft->next;
            h1 = h1->next;
            ft->next = NULL;
        }
    else
        while(h2!=NULL)
        {
            ft->next = h2;
            ft = ft->next;
            h2 = h2->next;
            ft->next =NULL;
        }
    return fh;
}



node* mergeSort(node *head) {
 if(head==NULL||head->next==NULL)
 {
     return head;
 }
    
    node * slow = head,* fast =head->next;
   while(fast!=NULL&&fast->next!=NULL)
{
    slow=slow->next;
     fast=fast->next->next;
 }
    node* temp = slow->next;
    slow->next =NULL;

   node*h1= mergeSort(head);
   node*h2= mergeSort(temp);
 
    head = merge(h1,h2);

    return head;
}
    
