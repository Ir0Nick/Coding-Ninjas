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

int indexOfNIter(Node *head, int n) {
if(head==NULL)
    return -1;
    if(head->data==n)
        return 0;
    int t= indexOfNIter(head->next,n);
    if(t==-1)
        return -1;
    else 
        return 1+ t;
    
}


