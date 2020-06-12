//head is the head of the linked list
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

BUBBLE SORT:

for(int i=0;i<n-1;i++)

	for(j=0;j<n-i-1;j++)
	
    	if(a[j]>a[j+1])
			  swap(a[j],a[j+1]);
  
  
  
*/




node* bubble_sort_LinkedList_itr(node* head)
{
	int n=0;node*ptr=head;
    while(ptr!=NULL)
    {
        n++;
        ptr= ptr->next;
    }
    while(--n)

    {  node* c= head,* prev= NULL;
    
    while(c->next!=NULL)
    {
        if(c->data > c->next->data)
        {
            if(prev == NULL)
            {
                	head= head->next;
                    c->next = c->next->next;
                	head->next = c;
                	c= head;
            }
            else
            {
                prev->next = c->next;
                c->next = c->next->next;
                prev->next->next = c;
                c= prev ->next;
            }
            
            
        }
        prev= c;
        c= c->next;
    }
    }
    return head;
    
    
    
}
