//head is head of linked list,i is the index, data is data of your node
// Following is the node structure
/**************
 class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
 };
***************/

Node* insertNodeRec(Node *head, int i, int data) {
 if(head==NULL)
     return head;
     if(i==0)
     {
         Node * x= new Node(data);
         x->next = head;
         head=x;
         
     }

     if(i==1)
     {
         Node * x= new Node(data);
         x->next=head->next;
         head -> next = x;
         
     }
    insertNodeRec(head->next,i-1,data);
    return head;
}



