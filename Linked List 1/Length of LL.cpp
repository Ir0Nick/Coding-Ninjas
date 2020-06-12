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

int length(Node *head) {
int length=0;
    while(head!=NULL)
    {
        length ++;
        head = head->next;
    }
return length;
}


