/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node* mergeTwoLLs(Node *head1, Node *head2) {
    Node *fh,*ft;
    if(head1->data>head2->data)
    {fh=ft=head2;
     head2=head2->next;}
    
    else
    {
        fh=ft=head1;
        head1=head1->next;
    }   
    ft->next=NULL;
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            ft->next=head1;
            head1=head1->next;
            ft=ft->next;
            ft->next=NULL;
        }
        else
        {
            ft->next=head2;
            head2=head2->next;
            ft=ft->next;
            ft->next=NULL;
        }
        
    }
    if(head1==NULL)
    {  while(head2!=NULL)
   		 { 
        	ft->next=head2;
          ft=ft->next;
        head2=head2->next;
        ft->next=NULL;
   		 }
    }
    else {
          
        while(head1!=NULL)
        {
            ft->next=head1;
            ft=ft->next;
            head1=head1->next;
            ft->next=NULL;
        }
        
    }
         return fh;
}


