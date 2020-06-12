#include<iostream>
using namespace std;
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

Node* deleteNode(Node *head, int i) {
Node *t=head,*prev=NULL;

int in=0;
while(head!=NULL&&i!=in)
{   prev=head;
       head=head->next;
       in++;
}
if(in==i&&head!=NULL)
prev->next=head->next;
    return t;
}

