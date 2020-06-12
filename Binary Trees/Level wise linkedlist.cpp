// Following is the Node and Binary Tree node structure

/**************
class node{
public:
    T data;
    node<T> * next;
    node(T data){
        this->data=data;
        this->next=NULL;
    }
};

class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

***************/
#include<queue>
vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {

    vector<node<int>*> a;
    if(root==NULL)
    return a;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(q.size()!=0)
    {
        int n = q.size()-1;
       
            	node<int> * head  = new node<int>(q.front()->data),* tail;
        			tail = head;
           BinaryTreeNode<int> *ptr=q.front();
                q.pop();
            if(ptr->left)
                q.push(ptr->left);
        	if(ptr->right)
                q.push(ptr->right);
             while(n--)
        {  BinaryTreeNode<int> * ptr= q.front();q.pop();
         	tail->next = new node<int>(ptr->data);
         if(ptr->left)
                q.push(ptr->left);
        	if(ptr->right)
                q.push(ptr->right);
         
         tail= tail->next;
    
        }
        a.push_back(head);
    }
    return a;

}

















