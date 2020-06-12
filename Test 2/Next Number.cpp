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
#include<stack>
Node* NextLargeNumber(Node *head) {
    Node* temp = head;
    while(temp->next!=NULL)
        temp = temp->next;
    if(temp->data!=9)
    {
        temp->data += 1;
        
    }
    else
    {
        stack<int> st;
        temp = head;
        while(temp!=NULL)
        {
            st.push(temp->data);
        	temp = temp->next;
        }
        head = NULL;
        int carry =0;int i=0;
        while(!(st.empty()))
        {
            int num = st.top();int c = (i==0);
            i++;
            Node* ptr= new Node((num+carry+c)%10); 
            carry = (num+1)/10;
            ptr->next = head;
            head = ptr;
            st.pop();
        }
        if(carry ==1)
        {
            Node * p = new Node(1);
            p->next = head;
            head = p;
        }
    }
    return head;
    
}


