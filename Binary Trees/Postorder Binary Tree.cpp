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

void postOrder(BinaryTreeNode<int> *root) {
  if(root)
  {
      postOrder(root->left);
      postOrder(root->right);
      cout<<root->data<<' ';
      
  }
    
}
