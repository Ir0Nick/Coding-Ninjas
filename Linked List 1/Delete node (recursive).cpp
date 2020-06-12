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

Node* deleteNodeRec(Node *head, int i) {
  if(head==NULL||((head->next==NULL)&&i>0))
      return head;
    if(i==0)
        return head->next;
    if(i==1)
    {
        head->next=head->next->next;
        return head;
    }
    if(i>1)
    deleteNodeRec(head->next,i-1);
    return head;
    
}


