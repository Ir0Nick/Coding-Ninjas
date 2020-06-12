#include<queue>
#include <bits/stdc++.h> 
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

void printLevelATNewLine(BinaryTreeNode<int> *root) {
  if(root==NULL)
      return;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);int i;
    while(q.size()!=0)
    {		i = q.size();
         for(int x=1;x<=i&&!q.empty();x++)
         {
        	BinaryTreeNode<int>* ptr = q.front();
            q.pop();
            cout<<ptr->data<<' ';
			if(ptr->left) 
			q.push(ptr->left);
             
             if(ptr->right)
    		q.push(ptr->right);
    	
         
         }
     cout<<'\n';
    }
}
