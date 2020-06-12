//head is head of your linked list, i and j are indexes to be swapped
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
node* swap_nodes(node *head,int i,int j)
{    node*ptr= head;
     node*previ,*prevj;
	 int count=0;
 if(i==j)
 {
     return NULL;
 }
 if(i==0||j==0)
 { 
     
     if(i==0)
     {	
              count =0;
         while(ptr!=NULL && count<j)
         {
             prevj = ptr;
             ptr= ptr->next;
             count++;
         }
         
         node* temp= head,* j=ptr;
            prevj->next=head;node* x;
         x=head->next;
         head->next=j->next;
         j->next=x;
      
         head= j;
         return head;
         
     }
     else if(j==0)
     {
         count =0;
         while(ptr!=NULL && count<i)
         {
             previ = ptr;
             ptr= ptr->next;
             count++;
         }
         
         node* temp= head,* i=ptr;
       previ->next=head;  node*x;
         x=head->next;
         head->next=i->next;
         i->next=x;
         
         head= i;
         return head;
     }
 }
         count =0;
         previ=prevj=NULL;
   while(ptr!=NULL&&(count <=i||count<=j))
 	   {
    	    if(count == i-1)
            {
	  	     previ= ptr;
            }
            if(count == j-1)
            {
                prevj=ptr;
            }
       ptr= ptr->next;
         count++;
      }
  
     if(previ==NULL||prevj==NULL)
         return NULL;
 node * t=previ->next;
   previ->next= prevj->next;
 prevj->next=t;
 t = previ->next->next;
 previ->next->next=prevj->next->next;
 prevj->next->next= t;
 return head;
 
 
}

