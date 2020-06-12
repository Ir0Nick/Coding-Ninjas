// Following is the node structure
/**************
class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    ~Node() {
        if(next) {
            delete next;
        }
    }
};
***************/

void delete_alternate_node_LinkedList(Node *head) {
  
    Node* temp  = head;
    while(temp!=NULL&&temp->next!=NULL)
    {
		temp ->next = temp->next->next;
        temp = temp->next;
    }
}
