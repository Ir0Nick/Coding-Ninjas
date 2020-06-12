// Following is the Binary Tree node structure
/**************
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
#include<stack>
void zigZagOrder(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int>*> q;
    stack<BinaryTreeNode<int>*> s;
    q.push(root); int type=0;
    while(q.size()!=0)
    { int size = q.size();
       if(type%2==0)
     	while(size--)
    	  {    
      	
          		BinaryTreeNode<int>* ptr = q.front();
            	q.pop(); 
            	
            	if(ptr->left)
                    q.push(ptr->left);
                if(ptr->right)
                 	q.push(ptr->right);
	             cout<<ptr->data<<' ';
   		   }
      if(type%2==1)
         { while(size--)
           {
             	BinaryTreeNode<int>* ptr = q.front();
            	q.pop(); 
              	if(ptr->left)
                    q.push(ptr->left);
                if(ptr->right)
                 	q.push(ptr->right);
                s.push(ptr);
             	
            }
          	while(s.size()!=0)
            {
                cout<<s.top()->data<<' ';
                s.pop();
            }
          
         }
     type++;
   		cout<<'\n';     	
    }

}
