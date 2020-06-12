#include <queue>
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

void printLevelWise(BinaryTreeNode<int> *root) {
   	if(root == NULL)
    {
        	return;
    }
  
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(q.size()!=0){
        BinaryTreeNode<int> * ptr =q.front();
        q.pop();
        cout<<ptr->data<<':';
        if(ptr->left)
        {
            cout<<"L:"<<ptr->left->data<<',';
            q.push(ptr->left); 
        }else
              cout<<"L:"<<"-1"<<',';
        if(ptr->right)
        {
            cout<<"R:"<<ptr->right->data;
            q.push(ptr->right);
            
        }else
            cout<<"R:"<<"-1";
        cout<<'\n';
        
    }
    

}
