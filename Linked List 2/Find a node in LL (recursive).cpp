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

int indexOfNRecursive(Node *head, int n) {
  if(head==NULL)
  {
      return -1;
  }
    if(head->data==n)
    return 0;
    int x= indexOfNRecursive(head->next,n);
    if(x==-1)
        return -1;
    else return 1+ x;
}


