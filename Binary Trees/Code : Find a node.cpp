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

bool isNodePresent(BinaryTreeNode<int>* root, int x) {
   if(root!=NULL)
   {
       		if(root->data==x)
                return true;
           else
               return (isNodePresent(root->left,x)||isNodePresent(root->right,x));
       
   }
 return false;
}
