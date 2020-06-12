#include<climits>
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
bool search(int num,BinaryTreeNode<int> * root)
{
    if(root == NULL)
        return 0;
    if(root->data==num)
        return 1;
    
    return search(num,root->left) || search(num,root->right);
}
void nodesSumToS(BinaryTreeNode<int> *cn, int sum,BinaryTreeNode<int> * root)
{
    if(cn==NULL)
        return;
     if(cn->data < sum)
        	if((cn->data != sum -(cn->data))&&search(sum-cn->data,root))
            {    if(cn->data < sum - cn->data)
                	cout<<cn->data<<' '<<sum-cn->data<<'\n';			 
				 else
                     cout<<sum - cn->data<<' '<<cn->data<<'\n';
                        cn->data = INT_MIN;             
            }
    nodesSumToS(cn->left,sum,root);
    nodesSumToS(cn->right,sum,root);
}


void nodesSumToS(BinaryTreeNode<int> *root, int sum) {
  if(root==NULL)
      return;
    nodesSumToS( root,  sum,root); 
}  
